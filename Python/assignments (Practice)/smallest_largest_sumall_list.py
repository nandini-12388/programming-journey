numbers = list(map(int, input("Enter numbers separated by space: ").split()))

smallest = min(numbers)
largest = max(numbers)
Total = sum(numbers)

print(f"The smallest number in the list is {smallest}")
print(f"The largest number in the list is {largest}")
print(f"The sum of all numbers in the list is {Total}")


#Output
# Enter numbers separated by space: 1 34 56 78 9 
# The smallest number in the list is 1
# The largest number in the list is 78
# The sum of all numbers in the list is 178