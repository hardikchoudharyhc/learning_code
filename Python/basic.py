# ------------- Basics of python ------------
"""
    Multiline comment
"""
# I---- nput and output function ----
print("Greetings!") # All input are strings.
name = input("Type your name? ") 
# print("Hello, " + name) Can write like this also.
# print(f"hello, {name}") formatted string.
print("Hello,",name)

# Parameters in print function => (*objects, sep = " ", end = "\n"), having n number of objects as input and they are seperated by a "," and the value in sep parameter (default is " ") is given between them. At the end of print, the value in end parameter ( default is \n) is given.
print("see", sep = "..", end = "!!!!")
print("this")

# to add quotes in print
print('"hey!')
# or using escape character '\'
print("\"hello\"")


x = int(input("Enter value :"))
y = int(input("Enter value :"))
print(x+y);

x = float(input("Enter value :"))
y = float(input("Enter value :"))
print(x+y); 