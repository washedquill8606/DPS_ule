#include <stdio.h>
#include <threads.h>

// CON43-C. Do not allow data races in multithreaded code
// CON02-C. Do not use volatile as a synchronization primitive
static volatile int contador = 0;

int incrementar(void *arg) {
    for (int i = 0; i < 100000; ++i) {
        contador++;
    }
    return 0;
}

int main (void) {
    thrd_t hilo1, hilo2;

    thrd_create(&hilo1, incrementar, NULL);
    thrd_create(&hilo2, incrementar, NULL);

    thrd_join(hilo1, NULL);
    thrd_join(hilo2, NULL);

    printf("Contador final: %d\n", contador);

    return 0;
}