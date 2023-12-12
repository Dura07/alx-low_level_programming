# example.py

import ctypes

libexample = ctypes.CDLL('./libexample.so')

libexample.add.argtypes = [ctypes.c_int, ctypes.c_int]
libexample.add.restype = ctypes.c_int

libexample.multiply.argtypes = [ctypes.c_int, ctypes.c_int]
libexample.multiply.restype = ctypes.c_int

result_add = libexample.add(3, 5)
print(f"Result of add function: {result_add}")

result_multiply = libexample.multiply(3, 5)
print(f"Result of multiply function: {result_multiply}")

