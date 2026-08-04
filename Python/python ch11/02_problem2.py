class Animals:
    pass

class Pets(Animals):
    pass

class Dog(Pets):
    
    @staticmethod 
    def bark():
        print(f"The dog barks Bow Bow!")


d = Dog()

d.bark()