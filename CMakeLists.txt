cmake_minimum_required(VERSION 3.14)
project(laboratory C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(laboratory
        Controller.pb.c Controller.pb.h
        Recipe.pb.c Recipe.pb.h
        Record.pb.c Record.pb.h
        XpressHw.pb.c XpressHw.pb.h
        pb_common.c pb_common.h
        pb_decode.c pb_decode.h
        pb_encode.c pb_encode.h
        main.c main.h)

add_executable(read_machine
        Controller.pb.c Controller.pb.h
        Recipe.pb.c Recipe.pb.h
        Record.pb.c Record.pb.h
        XpressHw.pb.c XpressHw.pb.h
        pb_common.c pb_common.h
        pb_decode.c pb_decode.h
        pb_encode.c pb_encode.h
        read_machine.c read_machine.h
)

add_definitions(-DPB_FIELD_16BIT=1)

#target_link_libraries(${PROJECT_NAME} protobuf-nanopb)