class Employee:
    language = "Py" # This is a class attribute
    salary = 1200000  


harry = Employee()
harry.language = "Javascript" # This is an instance attribute
print(harry.language, harry.salary)


#Preference: Instance attribute > Class attribute
#output: Javascript 1200000