# ----------------- String and thier functions ------------

name = "    abcd  efg"
print(name.strip())
# Trims the space from string

print(name.capitalize())
# Capilatize the first letter of the string (only).

name2 = "hardik choudhary"
print(name2.title())
# Capitalize the first letter of all words in string

first, last = name2.split(" ")
# Split the string
print("First name is : -",first,"\nLast name is :-",last)

# Interactive mode - Type python in terminal to use python on the ternimal, line by line execution.