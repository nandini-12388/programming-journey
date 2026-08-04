class Calculator:
    def __init__(self, n):
        self.n = n

    def square(self):
        print(f"The square is {self.n*self.n}")

    def cube(self):
        print(f"The cube is {self.n**3}")
              
    def squareroot(self):
        print(f"The squareroot is {self.n**1/2}")

    @staticmethod
    def greet():
        print("hello there!")

a = Calculator(4)        
a.greet()
a.square()
a.cube()
a.squareroot()


# hello there!
# The square is 16
# The cube is 64
# The squareroot is 2.0