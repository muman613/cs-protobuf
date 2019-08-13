//
// Created by muman on 8/12/19.
//

#include <stdio.h>
#include <pb_encode.h>
#include <pb_decode.h>
#include "Record.pb.h"

#include "main.h"

#define MAX_PERSISTENT_SIZE (80000)
MachineSettings machineSettings = MachineSettings_init_default;
uint8_t buffer[MAX_PERSISTENT_SIZE];


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
int main(int argc, char * argv[]) {
#if 0
    pb_ostream_t stream = pb_ostream_from_buffer(buffer, sizeof(buffer));

    settings.machine_serial_num = 12345;
    strcpy(settings.serial_number, "Juicy");
    bool status = pb_encode_delimited(&stream, MachineSettings_fields, &settings);
    size_t msgLen = stream.bytes_written;
    if (!status) {
        fprintf(stderr, "Encoding failed! [%s]\n", PB_GET_ERROR(&stream));
        return 1;
    }

    FILE * file = fopen("/tmp/machine.bin", "w");
    if (file) {
        fwrite(buffer, msgLen, 1, file);
        fclose(file);
    }
#else
    if (readSettings("/tmp/machine.bin", &machineSettings) == 0) {
        printf("OK\n");
    }
#endif

    return 0;
}