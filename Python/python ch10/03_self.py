class Employee:
    language = "Python" # This is a class attribute
    salary = 1200000  

    def getInfo(self):
        print(f"The language is {self.language}. The salary is {self.salary}")

    @staticmethod  #when we dont require properties of object. It is marked as a function that does not require self.
    def greet():
        print("Good Morning")    


harry = Employee()
harry.getInfo()
harry.greet()
#Employee.getInfo(harry) both lines means the same. This shows there is an argument which needs to be accepted by using self.
#always give a self to your method.Important

# The language is Python. The salary is 1200000
# Good Morning