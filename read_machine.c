#include <stdio.h>
#include <pb_encode.h>
#include <pb_decode.h>
#include "Record.pb.h"
#include "read_machine.h"

#define MAX_PERSISTENT_SIZE (80000)

/**
 * Read the settings from a file.
 *
 * @param filename
 * @param data
 * @return 0 on success
 */
int readSettings(const char * filename, MachineSettings * data) {
    MachineSettings settings = MachineSettings_init_default;
    uint8_t buffer[MAX_PERSISTENT_SIZE];
    FILE * fp = NULL;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "ERROR: File not found!\n");
        return 1;
    }
    size_t fileSize = 0;
    fseek(fp, 0, SEEK_END);
    fileSize = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    fread(buffer, fileSize, 1, fp);
    fclose(fp);

    pb_istream_t stream = pb_istream_from_buffer(buffer, sizeof(buffer));
    bool status = pb_decode_delimited(&stream, MachineSettings_fields, &settings);
    if (!status) {
        fprintf(stderr, "Decoding failed! [%s]\n", PB_GET_ERROR(&stream));
        return 1;
    }
    memcpy(data, &settings, sizeof(settings));

    return 0;
}

/**
 * Write settings to file.
 *
 * @param filename Name of file to save to.
 * @param settings Pointer to settings structure.
 * @return 0 on success
 */
int writeSettings(const char * filename, MachineSettings * settings) {

    uint8_t buffer[MAX_PERSISTENT_SIZE];
    pb_ostream_t stream = pb_ostream_from_buffer(buffer, sizeof(buffer));

    bool status = pb_encode_delimited(&stream, MachineSettings_fields, settings);
    size_t msgLen = stream.bytes_written;
    if (!status) {
        fprintf(stderr, "Encoding failed! [%s]\n", PB_GET_ERROR(&stream));
        return 1;
    }

    FILE * file = fopen(filename, "w");
    if (file) {
        fwrite(buffer, msgLen, 1, file);
        fclose(file);
    }

    return 0;
}

/**
 * Main entry point
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char * argv[]) {
    MachineSettings settings = MachineSettings_init_default;

    if (argc != 2) {
        fprintf(stderr, "%s [setting-file.bin]\n", argv[0]);
        return 1;
    }

    if (readSettings(argv[1], &settings) == 0) {
        printf("Name      (string)   : %s\n", settings.name);
        printf("Serial #  (string)   : %s\n", settings.serial_number);
        printf("Serial #  (#)        : %d\n", settings.machine_serial_num);
        printf("Has Edge  (bool)     : %s\n", settings.has_edge_ip?"TRUE":"FALSE");

        settings.machine_serial_num = 12345;
        strcpy(settings.serial_number, "12345");
        if (writeSettings("/tmp/boo.bin", &settings) == 0) {
            printf("OK\n");
        }
    }
    return 0;
}