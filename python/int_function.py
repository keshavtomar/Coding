number_one = input("enter first number\n")
number_second = input("enter second number\n")
total = number_one+number_second
print("your total is"+"  "+ total)#it give wrong result bcoz both input are strings
#number_one = int(input("enter first number\n")) 
#number_second = int(input("enter second number\n"))
#total = number_one+number_second
#print("your total is"+"  "+ total)#it will throw error bcoz now total is integer and integer cant be added with string
number_one = int(input("enter first number\n"))
number_second = int(input("enter second number\n"))
total = number_one + number_second
print("your total is"+"  "+ str(total))
#str function change integer to string
#int function change into integer
#float function change into float
