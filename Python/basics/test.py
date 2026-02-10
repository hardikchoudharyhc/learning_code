# Test file for errorCheck.py
def main():
    testing("original")

def testing(name):
    print(f"this is {name} function")

def square(n):
    return n+n

if __name__ == "__main__":
# __name__  - built in variable. If 1. file run directly then it taking equal to __main__ , 2. file is imported then it take value filename.
    main()