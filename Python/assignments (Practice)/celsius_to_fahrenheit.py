def c_to_f(c):
    return (c * 9/5) + 32

c = float(input("Enter temp in degree celsius: "))
f = c_to_f(c)
print(f"Temp in fahrenheit is {f}")