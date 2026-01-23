# Continuation from library.py
from test import square
def main():
    test_square()

# def test_square():
#     try:
#         assert square(2) == 4
#         # Assert - Check the assumption to be true. If true then nothing happens, if false it give an AssertionError
#     except AssertionError:
#         print("2 square is not 4")
#     try:
#         assert square(3) == 9
#     except AssertionError:
#         print("3 square is not 9")

# Instead of checking manually, we an use pytest (help in reducing the condition etc). To use pytest:

def test_square():
    assert square(2) == 4
    assert square(3) == 9
    assert square(-1) == 1
    assert square(-2) == 4
# In the summary, only first fail is shown (in terminal)
if __name__ == "__main__":
    main()