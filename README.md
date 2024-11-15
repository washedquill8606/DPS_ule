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

# Practica Heap Overflow linea de comandos 
## Especificaciones
* Linux Ubuntu 24.04 via WSL
* C11
* gcc 13.2.0
#### gcc heap_overflow.c -w -g -no-pie -z execstack -o heap_overflow
#### ./heap_overflow Hola
#### data: esta en [0x1619d2a0], el puntero fp esta en [0x1619d2f0]
#### Esperando fuera
#### ./heap_overflow XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#### data: esta en [0x1ff052a0], el puntero fp esta en [0x1ff052f0]
#### Segmentation fault (core dumped)
#### gdb ./heap_overflow
#### (gdb) list 25,40
#### (gdb) b 38
#### (gdb) run XXXX
#### (gdb) info proc map
#### (gdb) x/240x 0x405000
#### (gdb) disassemble f_espero_fuera
#### chmod a+x ppl heap_python.py
#### python3 heap_python.py
#### ./heap_overflow $(python3 heap_python.py)
#### data: esta en [0x144942a0], el puntero fp esta en [0x144942f0]
#### Segmentation fault (core dumped)
#### gdb -q ./heap_overflow
#### (gdb) run $(python3 heap_python.py)
#### data: esta en [0x4052a0], el puntero fp esta en [0x4052f0]
#### Program received signal SIGSEGV, Segmentation fault.
#### (gdb) info registers
####
####
####
####
####
####
####