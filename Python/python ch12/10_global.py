a = 89

def fun():
    global a
    a = 3
    print(a) # 3


fun()    
print(a) # 3 but if global keyword is not there then output is 89 as it does not come under fun. 