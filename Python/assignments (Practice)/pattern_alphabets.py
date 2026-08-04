'''         #ASCII CODE:
A            for capital letters = starts from 65 to 90
AB           for small letters = starts from 97 to 122
ABC
ABCD
ABCDE
'''

N = int(input("Enter number of rows: "))
for i in range(1 , N+1):  #indicates number of character in each row
    for j in range (i):   #here range starts from 0 by default, it counts characters
        print(chr(65 + j), end="")
    print() 


#Output    
# Enter number of rows: 5
# A
# AB
# ABC
# ABCD
# ABCDE