# ------------- Basics of python --------------
"""
    Multiline comment
"""
# I---- Input and Output functions ----
print("Greetings!") # All input are strings.
# name = input("Type your name? ") 

# print("Hello,",name)
# print("Hello, " + name) Can write like this also.
# print(f"hello, {name}") formatted string.

# Parameters in print function => (*objects, sep = " ", end = "\n"), having n number of objects as input and they are separated by a "," and the value in sep parameter (default is " ") is given between them. At the end of print, the value in end parameter ( default is \n) is given.
print("see", sep = "..", end = "!!!!")
print("this")

# to add quotes in print
# print('"hey!')
# or using escape character '\'
# print("\"hello\"")


# x = int(input("Enter value :"))
# y = int(input("Enter value :"))
# print(x+y);

# x = float(input("Enter value :"))
# y = float(input("Enter value :"))
# print(x+y); 

# z = round(x,2)
# Round off the value to 2 decimal place
# print(z)

# ---- Functions ---- 
# Firstly defined a function let say main, in which we define the function and call it and below it, we define that function and then we call the first function.
def main() :
    end = int(input("How much time to )complete python?"))
    python(end)


def python(end = 7):
    print(end,"days remaining till completion.")
    
main()

"""Conditional operator ( <,>,<=,>=,!=)
If - elif statement (just like else if), If -elif - else statement. 
Logical operators:
Or operator - either this or this. Keyword = or
And operator - either this and this both. Keyword = and.
Not operator - negation of the statement. Keyword = not."""

x = 3
y = 4
if x > y or x < y :
    print("Unequal")
else :
    print("Equal")

# Python allow setting a range in a variable like (to,variable  from) types.
if 90 <= x <= 50 :
    print ("A")
elif 50 < x <= 30 :
    print("B")
else :
    print("C")

# Match statements (just like switch statement in c/c++)
name = "takeInput"
match name:
    case "abcd":
        print("abcd")
    case "efgh":
        print("efgh")
    case _:
        print("This is default statement")

# list_name.append(item) - append the item a the end of the list.


# ---- Loops ----
# i = 0
# while i < 3 :
    # print("k")
    # i+=1
# for _ in {0,1,2}:  Instead of i, _ is used, showing that the iterator is not connected to the data set.
    # print("k")
# for i in range(3):
    # print("k")
# print("k\n" * 3, end = "")

# students = ["a", "b", "c"]

# for student in students :
#     print(student)

# students = {
#     "a" : 1,
#     "b" : 5,
#     "c" : 5,
# }

# print(students["a"])

# for student in students :
#     print(student,students[student],sep=":")

students = [
    {"name" : "a", "place" : "b", "things" : "c"},
    {"name" : "d", "place" : "f", "things" : "h"},
    {"name" : "e", "place" : "g", "things" : "i"},
]

# for student in students:
#     print(student["name"], student["place"], student["things"], sep=":")

# ---- Exception handling ----
# try :
#     x = int(input("Enter x:"))
#     # print(f"x is {x}") Formatted output.

# # ValueError - Tell if error is in the value.
# except ValueError:
#     print("Not an integer")

while True:
    try:
        x = int(input("Enter x:"))
        print(f"x is {x}")
    except:
        pass # To not repeatedly pass the same line again and again
    else:
        break
