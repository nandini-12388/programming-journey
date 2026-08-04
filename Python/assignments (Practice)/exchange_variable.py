a = int(input("Enter first value: "))
b = int(input("Enter second value: "))

a,b = b,a
print("After swapping:")
print(f"First value: {a}")
print(f"second value: {b}")