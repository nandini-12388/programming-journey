# Logic to Check Perfect Number
# Take a number n
# Find all divisors from 1 to n-1
# Add only those numbers that divide n exactly
# Compare the sum with n

n = int(input("Enter number: "))
sum_div = 0

for i in range(1, n):
    if n%i == 0:
        sum_div += i
       
if sum_div == n:
    print("It is a Perfect number")
else:
    print("It is not a perfect number")           