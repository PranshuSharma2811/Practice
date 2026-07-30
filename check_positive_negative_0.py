a = int(input("Enter a numeber: "))
if a ==0:
    print("The number is zero")
elif a>0:
    print("The number is positive")
else:
    print("The number is negative")
#     Check if a number is positive, negative, or zero.
# Find the largest of three numbers.
# Check if a year is a leap year.
# Build a simple calculator using match-case (+, -, *, /).
# Ask for a username and password, and allow login only if both are correct.
# Determine whether a student has passed (marks >= 40) or failed.
# Check whether a character is a vowel or a consonant.
number = int(input("Enter a number: "))
if (number % 4 == 0 and number % 100 != 0) or (number % 400 == 0):
    print(number, "is a leap year")
else:
    print(number, "is not a leap year")

