l = [1, 45, 87, 32, 21, 19, 4]

total=len(l)
even = 0
odd = 0
for items in l:
    if (items%2==0):
        even += 1 
    else:
        odd += 1

print(f"Total elements: {total}")
print(f"Even numbers: {even}")            
print(f"Odd numbers: {odd}")     


#Output
# Total elements: 7
# Even numbers: 2
# Odd numbers: 5