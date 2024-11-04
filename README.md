# Ejemplo de concurrencia

## Enlace al video en Drive: https://drive.google.com/file/d/1aH8IVtT7cesa1tHxP_RPtxqyl6htnHzW/view?usp=sharing

## Ejemplificación de las reglas CON02-C y CON43-C referentes a data races con multihilos, uso de variables volátiles y atómicas.
## Tiempo de realización: 3 h

## Especificaciones
* Linux Ubuntu 24.04 via WSL
* C11
* gcc 13.2.0
* gcc concurrency_error.c -o concurrency_error -std=c11 -Wall
* gcc concurrency.c -o concurrency -std=c11 -Wall