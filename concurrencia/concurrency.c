#include <stdio.h>
#include <threads.h>
#include <stdatomic.h>

atomic_int contador = 0;

int incrementar(void *arg) {
    for (int i = 0; i < 100000; ++i) {
        atomic_fetch_add(&contador, 1);
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