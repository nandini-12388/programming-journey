from functools import reduce
a = [1, 2, 345, 7345, 65, 754, 45, 55, 53]

def greater(a, b):
    if(a>b):
        return a
    return b

print(reduce(greater, a))

#Output
#7345