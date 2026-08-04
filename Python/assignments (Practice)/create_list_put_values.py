n = int(input("Enter list size: "))
l = []

for i in range(1, 1+n):
    value = input(f"Enter value{i}: ")
    l.append(value)
print(l)    

#Output
# Enter list size: 3
# Enter value1: 5
# Enter value2: 6
# Enter value3: 7
# ['5', '6', '7']