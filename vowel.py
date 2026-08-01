char = input("Enter a single alphabet: ").lower()

if len(char) != 1 or not char.isalpha():
    print("Invalid Input")

elif char in "aeiou":
    print("Vowel")

else:
    print("Consonant")