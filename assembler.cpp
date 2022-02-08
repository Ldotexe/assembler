#include "assembler.h"
#include <string.h>

const char* names_of_cmd[] = {
    "push",
    "pop",
    "add",
    "out",
    "htl"
};

const int num_cmd = 5;

void make_binary (document *code, char* output){
    FILE* binary_code = fopen(output, "wb");
    for (int i = 0; i < code->number_of_strings; i++){
        printf("%s\n", code->string[i].pointer);
    }
    for (int i = 0; i < code->number_of_strings; i++){
        char *command = NULL;
        for (int j = 0; j < num_cmd && command; j++){
            command = strstr(code->string[i].pointer, names_of_cmd[j]);
        }
    }
    int arr[] = {5, 128, 47, 96, 1234567};
    fwrite(arr, 5, sizeof(int), binary_code);
    fclose(binary_code);
}
