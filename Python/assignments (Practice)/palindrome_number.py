def palindrome(n):
    s = str(n)
    return s==s[::-1] #reverses

num = int(input("Enter the number: "))
digits = len(str(num))

if palindrome(num):
    print("The number is palindrome.")
else:
    print("The number is not palindrome.")  

print(f"Total digits: {digits}")      


#Output
# Enter the number: 121
# The number is palindrome.    
# Total digits: 3


# Key takeaways 🧠
# len() ❌ does not work on integers
# Convert to string first → len(str(num))
# String slicing [::-1] is a clean way to reverse


#Without using string
def reverse_number(n):
    num = int(input("Enter a number: "))

if num == reverse_number(num):
    print("Palindrome")
else:
    print("Not Palindrome")