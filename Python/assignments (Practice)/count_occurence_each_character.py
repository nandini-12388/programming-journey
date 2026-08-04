s = input("Enter a string: ")

count = {}  #empty dictionary

for char in s:
    if char in count:
        count[char] += 1

    else:
        count[char] = 1 

print(count)    


#Enter a string: banana
#{'b': 1, 'a': 3, 'n': 2}