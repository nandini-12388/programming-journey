d = {"Aman": "87", "Anjali": "99", "Rahul":"67", "Tina": "100"}

for name in d:
    print(name)

d["Rahul"] = "85"

print (d)

#Output:
# Aman
# Anjali
# Rahul
# Tina
# {'Aman': '87', 'Anjali': '99', 'Rahul': '85', 'Tina': '100'}