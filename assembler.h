#include <iostream>
#include "string_sorting.h"
#include "file_working.h"
#ifndef ASSEMBLER_H_INCLUDED
#define ASSEMBLER_H_INCLUDED

void make_binary(struct document *code, char* output);

extern const char* names_of_cmd[];

#endif // ASSEMBLER_H_INCLUDED
