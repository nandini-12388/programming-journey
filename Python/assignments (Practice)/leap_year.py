year = int(input("Enter year: "))

if(year%4==0 and year!=100):
    print("The year is a leap year.")
else:
    print("The year is not a leap year.")  
    
    #  OR

def leap_year(n):
    if(n%4==0 and n%100!=0):
        return True
    return False

n = int(input("Enter year: "))
if leap_year(n):
    print("The year is a leap year.")
else:
    print("The year is not a leap year.")          