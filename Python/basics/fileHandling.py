# name = input("Enter your name: ")

# file = open("handledFile.txt","a")
# file.write(f"{name}\n")
# file.close()

# We can do the same thing with 'with' statement, which open and closes the files automatically at the end of the code block.
# with open("handledFile.txt","a") as file:
#     file.write(f"{name}\n")

handledFile = [] # List defining

with open("handledFile.txt","r") as file:
    for line in sorted(file): # Iterate over every line in the file.
        # print(line) Print the line with 2 gap since we have given \n in input an one \n is passed via print function. To solve this, use .rstrip()
        print(f"Hello,{line.rstrip()}")
# sorted(iterable,/,#,key="none,reverse="false") 

# Handling csv file (it have row and column separated by comma)
# with open("handledFile.csv") as file:
#     for line in file:
#         first, second = line.rstrip().split(",")
#         # print(f"{first} => {second}")
#         sentence = { "firstWord" : first, "secondWord" : second}
#         handledFile.append(sentence)
    
# # def get_firstWord(student):
# #     return student["firstWord"]
# # When passing key = "get_firstWord" in sorted

# for sentence in sorted(handledFile, key = lambda sentence : sentence["firstWord"], reverse = True):
#     print(f"{sentence['firstWord']} => {sentence['secondWord']}")


# Above work can be done with csv library
import csv

# with open("handledFile.csv") as file:
#     reader = csv.reader(file)
#     for first, second in reader:
#         handledFile.append({"firstWord":first, "secondWord":second}) 
    
# for sentence in sorted(handledFile, key = lambda sentence : sentence["firstWord"], reverse = True):
#     print(f"{sentence['firstWord']} => {sentence['secondWord']}")

with open("handledFile.csv") as file:
    reader = csv.DictReader(file)
    for row in reader:
        handledFile.append({"firstWord":row["first"], "secondWord":row["second"]})

for sentence in sorted(handledFile, key = lambda sentence : sentence["firstWord"], reverse = True):
    print(f"{sentence['firstWord']} => {sentence['secondWord']}")

first = input("Enter first name? ")
second = input("Enter second name? ")

# with open("handledFile.csv", "a") as file:
#     writer = csv.writer(file)
#     writer.writerow([first, second])

# Can use DictWriter for the same thing with an edge of giving input in any order for a specific key.

with open("handledFile.csv", "a") as file:
    writer = csv.DictWriter(file, fieldnames = ["first","second"])
    writer.writerow({"first":first, "second":second})

