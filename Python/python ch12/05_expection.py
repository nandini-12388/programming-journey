try:
    a = int(input("Hey, Enter a number: "))
    print(a) #Hey, Enter a number: 77
             # 77

except ValueError as v: # Used for a particular type of error. Similarly can be used for other error types also. 
    print("Heyyy")
    print(v)


except Exception as e:
    print(e) #Hey, Enter a number: nandini
             #invalid literal for int() with base 10: 'nandini'
             #This is not an error

print("Thank You")

#using this, our program will not crash.   
# Hey, Enter a number: h
# invalid literal for int() with base 10: 'h'
# Thank You 
# it stills prints "Thank You" showing our program has not crashed.          