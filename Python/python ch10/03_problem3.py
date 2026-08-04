class Demo:
    a = 4

o = Demo()
print(o.a) # Prints the class attribute because instance attribute is not present. 

o.a = 0  #Instance attribute is set
print(o.a) # Prints the Instance attribute because now Instance attribute is present.
# But this does not change the class attributes, it remains as it is.

print(Demo.a) # Prints the class attribute again   

# output:
# 4
# 0
# 4