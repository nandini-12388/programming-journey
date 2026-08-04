# A Fibonacci sequence is a series of numbers where:
# The first two numbers are 0 and 1
# Every next number is the sum of the previous two

#Using sets
fib_set = set()

a, b = 0, 1

for i in range(10):
    fib_set.add(a)
    a, b = b, a + b

print(fib_set)

#{0, 1, 2, 3, 34, 5, 8, 13, 21}  # Duplicates gets removed in set.

#Without using sets
def fibonacci(n):
    a = 0
    b = 1
    for i in range(1, n+1):
        print(a)
        a, b = b, a + b     

fibonacci(10)

#Output:
# 0
# 1
# 1
# 2
# 3
# 5
# 8
# 13
# 21
# 34