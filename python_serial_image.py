import serial
import time
import numpy as np

arduino = serial.Serial(port='COM4',   baudrate=115200, timeout=.1)

if __name__ == '__main__':

    picture = np.zeros((10,10))









