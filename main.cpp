#include <cstdio>
#include <iostream>
#include "string_sorting.h"
#include "file_working.h"
#include "assembler.h"

int main()
{
    char input[10] = "code.txt";
    char output[10] = "code.rb";
    struct document code = {};
    document_ctor_file(&code, input);
    make_binary(&code, output);
    document_dtor(&code);
}
