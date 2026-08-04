#sum of first n natural numbers

# sum(n) = sum(n-1) + n

def sum(n):
    if (n==1):
        return 1
    return sum(n-1) + n

n = int(input("Enter your natural number: "))
print(f"sum of first {n} natural number is {sum(n-1) + n}")