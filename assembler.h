#include <iostream>
#include "string_sorting.h"
#include "file_working.h"
#ifndef ASSEMBLER_H_INCLUDED
#define ASSEMBLER_H_INCLUDED

void make_binary(struct document *code, char* output);

typedef struct assembler_info{
    char* code;
    int ip_place;
    int name_size;
    char* operation_name;
    char* line;
    int ammount_of_operations;

}assembler_info

#endif // ASSEMBLER_H_INCLUDED
