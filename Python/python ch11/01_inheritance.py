class Employee:
    company = "ITC"
    def show(self, name, salary):
        self.name = name
        self.salary = salary
        print(f"The name is {self.name} and the salary is {self.salary}")

# class Programmer:
#     company = "ITC Infotech"
#     def show(self):
#         print(f"The name is {self.name} and the salary is {self.salary}")

# class showLanguage:
#     def show(self):
#         print(f"The name is {self.name} and he is good with {self.language} language")



class Programmer(Employee):
    company = "ITC Infotech"
    def showLanguage(self, language):
       self.language = language
       print(f"The name is {self.name} and he is good with {self.language} language")



a = Employee()
b = Programmer()

print(a.company, b.company)
a.show("Harry", 1200000)
b.show("John", 900000)
b.showLanguage("Javascript")