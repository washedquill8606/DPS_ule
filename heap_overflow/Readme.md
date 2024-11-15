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