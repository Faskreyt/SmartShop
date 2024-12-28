import serial
import time
a = input()
#Вместо переменной X, вставьте нужный COM-порт из Arduino.
ser = serial.Serial('COMX',9600, timeout = .1)
time.sleep(2)
ser.write(a.encode())