#name=input("type your name\n ")
#print("hello" + "  " + name)
#input function always take input as a string
#age=input("what is your age ? \n")
#print("your age is"+"  "+ age)  #Two strings can be added hence input function takes input as string 
name , age = input("enter your name and age").split()#space will required bw different inputs
print("Your name is" +" " +name + " "+ "and age is"+" "+age)
name , age = input("enter your name ,age").split(",")#comma will be required between different inputs
print("Your name is" +" " +name + " "+ "and age is"+" "+age)
