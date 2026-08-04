''''
1
22
333
4444
55555
'''

N = int(input("Enter number of rows: "))

for i in range (1, N+1):
    for j in range(i):
        print(i, end="")
    print()

#Output:
# 1
# 22
# 333
# 4444
# 55555    