#include <stdio.h>

// Verifica si el sistema es little o big endian para ordenar las direcciones
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