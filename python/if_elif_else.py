#type -1 to exit
age=int(input("Please provide your age\n"))
 
while age>=0:
    age=int(input("Please provide your age\n"))
    if 0<=age<3:
        print("You are free'\U0001F60D\n")
    elif 3<=age<60:
        print("You should pay full price of ticket'\U0001F622'\n")
    elif age>=60:
        print("Provide the half money as stated on ticket price'\U0001F622'\n")
    else:
        print("Thank you for using my software")                 
age=age+1

    