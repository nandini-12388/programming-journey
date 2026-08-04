def find_max(a, b, c):
    return max(a, b, c)

def find_min(a, b, c):
    return min(a, b, c)

a = int(input("Enter value1:"))
b = int(input("Enter value2:"))
c = int(input("Enter value3:"))

maximum = find_max(a, b, c)
minimum = find_min(a, b, c)

print(f"The maximum value is {maximum}")
print(f"The minimum value is {minimum}")