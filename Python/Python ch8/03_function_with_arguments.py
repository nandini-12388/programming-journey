def goodday(name, ending):
    print("Good Day," + name)
    print(ending)
    return "done" #gives value to the variable, here (a) 

a = goodday("Harry", "Thank you!")
print(a)
goodday("Rohan", "Thank you!")
goodday("Divya", "Thenks!!")
goodday("rahul", "Thank you!")  

# Good Day,Harry
# Thank you!
# done    value assigned using return
# Good Day,Rohan
# Thank you!
# Good Day,Divya 
# Thenks!!
# Good Day,rahul
# Thank you!