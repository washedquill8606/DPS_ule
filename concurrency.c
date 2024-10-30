#include <stdio.h>
#include <threads.h>

int contador = 0;

int incrementar(void *arg) {
    for (int i = 0; i < 100; ++i) {
        contador++;
    }
    return 0;
}