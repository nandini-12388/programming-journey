# a = int(input("Enter your number: "))
# b = int(input("Enter your number: "))
# c = int(input("Enter your number: "))

# average = (a + b + c)/3
# print(average)

# a = int(input("Enter your number: "))
# b = int(input("Enter your number: "))
# c = int(input("Enter your number: "))

# average = (a + b + c)/3
# print(average) to find the average of 3 different number each time instead of typing the same thimg again and again we can use functions
 
# Function Definition
def avg ():
    a = int(input("Enter your number: "))
    b = int(input("Enter your number: "))
    c = int(input("Enter your number: "))

    average = (a + b + c)/3
    print(average) 

avg() # Function Call
print("Thank you!")
avg()
print("Thank you!") 
avg() 
print("Thank you!") 
avg() 
avg() #now the same thing can be done 5 times in a single run
