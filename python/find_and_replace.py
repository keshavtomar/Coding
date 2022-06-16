string = "My name is Sachin chaudhary and i am healthy and my age is 22"
replace = string.replace("is", "was", 1)  # first "" define which word or character uh want replace and second "" by whom and the number in last tells us how many number of word uh want to replace from starting
print(replace)
replace = string.replace("is", "was")  #replce all the required words
print(replace)
find = string.find( "is")  #it will give the postion of first word of whose position uh wanna find
print(find)
find = string.find("is", 11)  #it will give the postion of word of whose position uh wanna find starting fromm 11th index
print(find)
#it also count the number spaces
#if i dont know the index of first is then to find the position of second is
pos_first = string.find("is")
pos_second = string.find("is", pos_first + 1)
print(pos_second)
