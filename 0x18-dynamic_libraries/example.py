# example.py

import ctypes

# Load the dynamic library
libexample = ctypes.CDLL('./libexample.so')

# Define the argument and return types for the 'add' function
libexample.add.argtypes = [ctypes.c_int, ctypes.c_int]
libexample.add.restype = ctypes.c_int

# Define the argument and return types for the 'multiply' function
libexample.multiply.argtypes = [ctypes.c_int, ctypes.c_int]
libexample.multiply.restype = ctypes.c_int

# Call the 'add' function
result_add = libexample.add(3, 5)
print(f"Result of add function: {result_add}")

# Call the 'multiply' function
result_multiply = libexample.multiply(3, 5)
print(f"Result of multiply function: {result_multiply}")

