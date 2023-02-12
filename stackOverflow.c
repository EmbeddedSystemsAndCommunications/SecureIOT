#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int func(char *str) {
    char buffer[512];
    int variable_a;
    strcpy(buffer, str);
    return 0;
}

int main(int argc, char *argv[]) {
    func(argv[1]);
    return 0;
}