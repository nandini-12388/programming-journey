string = input("Enter your string: ")

digits = 0
alphabets = 0
specials = 0
for char in string:
    if char.isdigit():
        digits += 1
    elif char.isalpha():
        alphabets += 1
    else:
        specials += 1

print(f"Digits: {digits}")        
print(f"Alphabets: {alphabets}")        
print(f"Special characters: {specials}")        