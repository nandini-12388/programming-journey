'''
sum(n) = n + sum(n-1)
'''

def sum(n):
    if n == 1:
        return 1
    else:
        return (n + sum (n-1))

n = int(input("Enter your number: "))
result = sum(n)

print(f"The sum of first {n} natural numbers is {result}")

# Enter your number: 6
# The sum of first 6 natural numbers is 21