class Employee:
    a = 1
    @classmethod
    def show(cls):
        print(f"The class attribute of a is {cls.a} ")

e = Employee()
e.a = 45

e.show()


#output: The class attribute of a is 1 
#When we use class decorator...class attribute has more preference than instance attribute.