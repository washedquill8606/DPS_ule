import sys
print("Little-Endian" if sys.byteorder == "little" else "Big-Endian")