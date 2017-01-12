import time
import serial
ser = serial.Serial(
    port='/dev/ttyACM0',
    baudrate=57600
)
while True:
    data = ser.readline()
    da = int(data)
    volt = da * ( 3.3 / 4095.0 )
    print(volt)
