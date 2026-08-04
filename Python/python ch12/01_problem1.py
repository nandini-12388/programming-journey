
try:
    with open("1.txt") as f:
        print(f.read())

except Exception as e:
    print(e)

try:
    with open("2.txt") as f:
        print(f.read())

except Exception as e:
    print(e)

try:
    with open("3.txt") as f:
        print(f.read())
        
except Exception as e:
    print(e)   

print("Thank You")         


#Output
# [Errno 2] No such file or directory: '1.txt'
# [Errno 2] No such file or directory: '2.txt'
# [Errno 2] No such file or directory: '3.txt'
# Thank You 





