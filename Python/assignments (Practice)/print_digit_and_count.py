num = input("Enter your number: ")
 
count = 0
print("Digits:")
for digits in num:
    print(digits) 
    count += 1

print(f"Total digits are {count}")