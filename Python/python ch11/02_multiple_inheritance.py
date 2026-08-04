class Employee:
    company = "ITC"
    def show(self, name, salary):
        self.name = name
        self.salary = salary
        print(f"The name is {self.name} and the salary is {self.salary}")

class Coder:
    language = "Python"
    def printLanguages(self, language):
        self.language = language
        print(f"Out of all the languages here is your language: {self.language}")

class Programmer(Employee, Coder):
    company = "ITC Infotech"
    def showLanguage(self):
       print(f"The company name is {self.company}. Programmer name is {self.name} and he is good with {self.language} language")



a = Employee()
b = Programmer()

b.show("John", 700000)
b.printLanguages("C++")
b.showLanguage()