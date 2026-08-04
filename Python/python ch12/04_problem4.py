try:
    a = int(input("Enter a number: "))
    b = int(input("Enter second number: "))
    print(f"The division a/b is {a/b}")

except ZeroDivisionError as v:
    print(v)
    print("infinite")
