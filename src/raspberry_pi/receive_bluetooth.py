import serial

ser = serial.Serial("/dev/rfcomm0", 9600, timeout = 1)
ser.reset_input_buffer()

while True:
    line = ser.readLine().decode("utf-8").rstrip()
    print(line)