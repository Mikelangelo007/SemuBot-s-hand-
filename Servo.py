import serial
import time

arduino_port = 'COM5'  # Adjust as necessary
baud_rate = 9600

try:
    ser = serial.Serial(arduino_port, baud_rate, timeout=1)
except serial.SerialException as e:
    print("Error opening serial port:", e)
    exit()

def set_servo_angle(servo_id, angle):
    command = f'{servo_id}{angle}\n'
    ser.write(command.encode('utf-8'))
    time.sleep(0.1)  # Delay for servo movement
try:
    while True:
        
        set_servo_angle('b', 180) # Ring finger close
        time.sleep(2)
        set_servo_angle('b', 0) # Ring finger open
        time.sleep(2)
        # set_servo_angle('a', 0) # index finger close
        # time.sleep(0.8)
        # set_servo_angle('f', 10) # index finger right
        # time.sleep(0.8)
        # set_servo_angle('a', 180) # index finger open
        # time.sleep(0.8)
        # set_servo_angle('c', 180)
        # time.sleep(2)
        # set_servo_angle('c', 0)
        # time.sleep(2)
        # set_servo_angle('d', 180) # Thumb close
        # time.sleep(2)
        # set_servo_angle('d', 0)  # Thumb open
        # time.sleep(2)
        # set_servo_angle('e', 180) # Middle finger close
        # time.sleep(2)
        # set_servo_angle('e', 0) # Middle finger open
        # time.sleep(2)
        
        
        # set_servo_angle('f', 30) #index finger middle
        # time.sleep(0.8)
        
        # set_servo_angle('g', 0)
        # time.sleep(2)
        # set_servo_angle('g', 180)
        # time.sleep(2)
except KeyboardInterrupt:
    print("Program terminated by user.")
finally:
    ser.close()
