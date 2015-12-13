import serial
import time
ser = serial.Serial("/dev/cu.usbmodem1411",9600)
print(ser.name)

STATE = 0;

while(True):
    if(STATE == 0):
        print("November,1982. You wake up in the subway in the Bronx.")
        STATE = 1


    if(STATE == 1):

        command = input("What do you want to do?  Go left?  Go right?   Sleep in the station?  Type your answer : ")
        command = command.strip()
        print(command)
        if(command == "Go left"):
            print("OUPS! Baseball bat in your face")
            command = "2" + "\n"
            ser.write(command.encode())
            time.sleep(3)
            command = "0" + "\n"
            ser.write(command.encode())

            STATE = 0
        elif(command == "Go right"):
            print("You are safe now")

            command = "1" + "\n"
            ser.write(command.encode())
            time.sleep(3)
            command = "0" + "\n"
            ser.write(command.encode())

            STATE = 2

        elif(command =="Sleep in the station"):
            print("somebody killed you in your sleep")
            command = "2" + "\n"
            ser.write(command.encode())
            time.sleep(3)
            command = "0" + "\n"
            ser.write(command.encode())                     #D Db C B
            STATE = 0

    if(STATE == 2):

        command = input("what to you want to do next?  Sleep on a bench?  Grab a taxi?  Run?  Type your answer : ")
        command = command.strip()
        print(command)
        if(command == "Sleep on a bench"):
            print("You've been eaten by rats")
            command = "2" + "\n"
            ser.write(command.encode())
            time.sleep(3)
            command = "0" + "\n"
            ser.write(command.encode())                          #D Db C B Sad trumbone
            STATE = 0

        elif(command == "Grab a taxi"):
            print("You've been stabed 48 times")
            command = "2" + "\n"
            ser.write(command.encode())
            time.sleep(3)
            command = "0" + "\n"
            ser.write(command.encode())                          #D Db C B Sad trumbone
            STATE = 0

        elif(command == "Run"):
            print("You got home safe")
            command = "1" + "\n"
            ser.write(command.encode())
            time.sleep(3)
            command = "0" + "\n"
            ser.write(command.encode())

            STATE = 3

    if (STATE == 3):
        print("You win!! You are fucking good")
        command = "3" + "\n"
        ser.write(command.encode())
        time.sleep(3)
        command = "0" + "\n"
        ser.write(command.encode())

        break



print("Reset the game if you want to play again")
# ser.write(command)
# ser.close()
