# Important Operations
# n % 10 → gives last digit
# n // 10 → removes last digit
# rev = rev * 10 + digit → builds reversed number

def reverse_num(n):
    rev = 0
    while n > 0:
        digit = n % 10
        rev = rev * 10 + digit
        n = n // 10
    return rev

n = int(input("Enter number: "))
reversed_num = reverse_num(n)

print(f"Reversed_number: {reversed_num}") 

#Output:
# Enter number: 12345
# Reversed_number: 54321