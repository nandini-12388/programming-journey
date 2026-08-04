#Nested If Else Statement:
num = int(input("Enter your number: "))

if num % 3 == 0:
    if num % 5 == 0:
        print("Divisible by both 3 and 5")
    else:
        print("Divisible by 3 but not 5")
else:
    print("Not divisible by 3")       

#Output:
# Enter your number: 6
# Divisible by 3 but not 5

#Nested For Loop 
for i in range (3):
    for j in range (2):
        print(f"i = {i} , j = {j}")     


# i changes only after the inner loop is completely done.
# Outer loop controls rows
# Inner loop controls column
# Total prints = 3 × 2 = 6
#Output
#i = 0 , j = 0
# i = 0 , j = 1
# i = 1 , j = 0
# i = 1 , j = 1
# i = 2 , j = 0
# i = 2 , j = 1