#name="Sachin"
#star=name.center(8,"*")#number of character in my name variable is 6 so star added will be 8-6=2 one is on left side and other is on right side
#print(star)

#WITH USER INPUT

name=input("Enter your name \n")
count=len(name)
print(name.center(count+8,"*"))