# Ejemplo de concurrencia

## Ejemplificación de las reglas CON02-C y CON43-C referentes a data races con multihilos, uso de variables volátiles y atómicas.

## Especificaciones
* Linux Ubuntu 24.04
* C11
* gcc 13.2.0
* gcc concurrency_error.c -o concurrency_error -std=c11 -Wall
* gcc concurrency.c -o concurrency -std=c11 -Wall