# import serial
# ser = serial.Serial("/dev/cu.usbmodem1411",9600)
# print(ser.name)

STATE = 0;

while(True):
    if(STATE == 0):
        print("State 0")
        ser.write()
        command = input("What state do you want to go to")
        print(command)
        if(command == "left"):
            print("We are going to state 1")
            STATE = 1

        elif(command == "right"):
            STATE = 2

    if(STATE == 1):
        print("State 1")
        command = input("What do you want to do?  Go left  Go right Sleep in the station")
        command = command.strip()
        print(command)
        if(command == "Go left"):
            print("OUPS! Baseball bat in your face")
            STATE = 0
        elif(command == "Go right"):
            print("You are safe now")
            STATE = 2
        elif(command =="Sleep in the station"):
            print("Killed in your sleep")
            STATE = 0

    if(STATE == 2):
        print("State 2")
        break



print("Thank you for playing")
# ser.write(command)
# ser.close()
