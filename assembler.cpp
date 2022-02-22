#include "assembler.h"
#include <string.h>

void make_binary (document *code, char* output){
    FILE* binary_code = fopen(output, "wb");
    for (int i = 0; i < code->number_of_strings; i++){
        printf("%s\n", code->string[i].pointer);
    }
    assembler_info asm_info = {0, 0, 0, 0, 0, 0}

    for (int i = 0; i < code->number_of_strings; i++){
        current_line = code->string[i].pointer;
        char *command = NULL;
        #define _push_pop_mode push_pop_mode (&asm_info)
        #define _jump_mode     jump_mode     ()
        #define _normal_mode   normal_mode   ()
        #define DEFCMD(name, num, mode, ...)                            \
        if (strncmp(current_line, #name, sizeof(#name) - 1) == 0){      \
             code                                                       \
        }                                                               \

    }
    int arr[] = {5, 128, 47, 96, 1234567};
    fwrite(arr, 5, sizeof(int), binary_code);
    fclose(binary_code);
}

