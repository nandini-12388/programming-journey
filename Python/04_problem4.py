def division5(n):
    if(n%5==0):
        return True
    return False

a = [1, 2, 345, 7654376, 7345, 65, 754, 45, 55, 53]

f = filter(division5, a)
print(list(f))

#Output:
# [345, 7345, 65, 45, 55]