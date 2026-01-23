# name = input("Enter your name: ")

# file = open("handledFile.txt","a")
# file.write(f"{name}\n")
# file.close()

# We can do the same thing with 'with' statement, which open and closes the files automatically at the end of the code block.
# with open("handledFile.txt","a") as file:
#     file.write(f"{name}\n")

with open("handledFile.txt","r") as file:
    for line in file: # Iterate over every line in the file.
        # print(line) Print the line with 2 gap since we have given \n in input an one \n is passed via print function. To solve this, use .rstrip()
        print("hello,", line.rstrip())