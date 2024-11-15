# Verifica si el sistema es little o big endian para ordenar las direcciones
import sys
print("Little-Endian" if sys.byteorder == "little" else "Big-Endian")