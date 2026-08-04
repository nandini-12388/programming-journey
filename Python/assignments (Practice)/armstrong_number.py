# Sum of each digit raised to the power of the total number of digits
# = the number itself

# Simple Formula
# If a number has k digits and digits are
# d₁, d₂, d₃, ...
# d₁ᵏ + d₂ᵏ + d₃ᵏ + ... = number

n = input("Enter number: ")
power = len((n))
sum_pow = 0

for digit in n:
    sum_pow += int(digit) ** power

if sum_pow == int(n):
    print("It is an armstrong number")
else:
    print("It is not an armstrong number")    

#Output
# Enter number: 153
# It is an armstrong number    