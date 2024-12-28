import serial
import time
a = input()
ser = serial.Serial('COM5', 9600,timeout = .1)
time.sleep(2)
ser.write(a.encode())