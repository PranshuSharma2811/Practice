a = int(input("First Number: "))
b = int(input("Second Number: "))
c = int(input("Third Number: "))

if a >= b and a >= c:
    print(a, "is largest")

elif b >= a and b >= c:
    print(b, "is largest")

else:
    print(c, "is largest")