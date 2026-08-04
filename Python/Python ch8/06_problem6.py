# inch * 2.54 = cm

def inch_to_cm(inch):
    return inch * 2.54

n = int(input("Enter value in inches: "))
c = inch_to_cm(n)
print(f"The corresponding value is {(c)} cm")