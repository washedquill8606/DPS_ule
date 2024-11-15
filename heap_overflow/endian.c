#include <stdio.h>

int main() {

    unsigned int x = 1;  
    char *c = (char *)&x;

    if (*c) {
        printf("El sistema es Little-Endian\n");
    } else {
        printf("El sistema es Big-Endian\n");
    }

    return 0;
}