class Employee:
    language = "Py" # This is a class attribute
    salary = 1200000  


harry = Employee()
harry.name =  "Harry" # This is an instance attribute
print(harry.name, harry.language, harry.salary)

rohan = Employee()
rohan.name = "Rohan Roro Robinson"
print(rohan.name, rohan.salary, rohan.language)

# Here name is instance/object attribute and salary and language are class attributes
# as they directly belong to the class


#output
# Harry Py 1200000
# Rohan Roro Robinson 1200000 Py