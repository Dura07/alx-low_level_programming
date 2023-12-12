# example.py

import ctypes
import os

current_directory = os.path.dirname(os.path.abspath(__file__))

libexample = ctypes.CDLL(os.path.join(current_directory, 'libexample.so'))

