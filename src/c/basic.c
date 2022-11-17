#include <stdio.h>

void fileOutput() {
    FILE* file = fopen("text", "w");
    fputs("OUTPUT!", file);

    if (!ferror(file)) {
        puts("Output succeed");
    }
    else {
        puts("Output failed");
    }

    fclose(file);
}

void fileInput() {
    FILE* file = fopen("text", "r");
    char input[64];
    fgets(input, 64, file);

    if (!ferror(file)) {
        puts("Input succeed");
        puts(input);
    }
    else {
        puts("Input failed");
    }

    fclose(file);
}

int main() { fileOutput(); fileInput(); }
