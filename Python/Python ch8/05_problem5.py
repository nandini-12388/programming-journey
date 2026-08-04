def pattern(n):
    if(n==0):
        return #stops the function call right there
    print("*" * n)
    pattern(n-1)


pattern(3)    

#output pattern
# ***
# **
# *