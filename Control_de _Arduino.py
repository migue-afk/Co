import serial
import time

migue=serial.Serial('/dev/ttyACM0',9600)
print ("Inicio de Script")
print ("      ")

while True:
        comando= input("ENTRADA :")
        migue.write(str.encode(comando))

migue.close()
