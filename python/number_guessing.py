
# Program to generate a random number between 0 and 9
# importing the random module
import random
winning_number=(random.randint(0,100))
name=input("What is your name dear?'\U0001F644'\n")
print(f"Hello,{name}'\U0001F590'.How are you?\n")
mood=input("\n")
print(f"It seems that you are feeling {mood} right now.'\U0001F642'\n")
guess=1
while guess>winning_number or guess<winning_number:
    guess=int(input("Provide any number\n"))
    if guess==winning_number:
        print("Your guess is correct'\U0001F60D' \n")
    elif guess>winning_number:
        print("your guess is higher than winning number'\U0001F622' \n")
    else: 
        print("Your guess is lower than winning number'\U0001F622'\n")                   
guess=guess+1
