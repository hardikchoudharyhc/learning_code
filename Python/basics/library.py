# ------------------ Library -----------------

import random 
# To specify the function which you want to import like only some function instead of the library, use - 'from random import choice'

coin = random.choice(["head", "tails", "unknown"])
# coin = choice["head", "tails", "unknown"]) if used 'from' keyword.

# print(coin)

card = random.randint(1,123)
# random.shuffle(var) To shuffle the value among the given value.
# print(card)

import statistics
# statistics.mean(nums) To give the mean the of given input numbers.

# To give input together with file running command, we can use
import sys

# try:
    # sys.exit("Hello, my name is" + sys.argv[1])
    # argv[0] is the filename only (library.py here). And can pass only one argument.
# except IndexError:
    # print("Too few argument.")

# sys.exit(prompt) => to exit the program at this line.
# for arg in sys.argv[1:5]:
#     print("Here we go", arg)
# Slicing function - To print values from provided input values. (from 1 to 4)

# Packages - 3rd party library. Pip - Program that manage and install packages.

# import cowsay

# cowsay.cow("This is cow")
# cowsay.trex("This is trex")

import requests
import json

# if len(sys.argv) != 2:
    # sys.exit()

# response = requests.get("https://itunes.apple.com/search?entity=song&limit=1&term=" + sys.argv[1])
# API key for apple itunes. we can run it using request library and the response is received in json file so we use json library to make it available tp see in python.
# print(json.dumps(response.json(), indent = 2))

# Now we can even print the particular key
# o = response.json()
# for result in o["results"]:
#     print(result["trackName"])

# Import
from test import testing 
# Import one function is better if you want to avoid th hassle of using  filename.function name every time when we use that function.
if len(sys.argv) == 2:
    testing(sys.argv[1])