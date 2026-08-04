class TwoDVector:
    def __init__(self, i, j):
        self.i = i
        self.j = j

    def show(self):
        print(f"The vector is {self.i}i + {self.j}j")    

class ThreeDVector(TwoDVector):
    def __init__(self, i, j, k):
        super().__init__(i,j)
        self.k = k

    def show(self):
        print(f"The vector is {self.i}i + {self.j}j + {self.k}k")    


a = TwoDVector(1, 2)
b = ThreeDVector(5, 2, 8)

a.show()
b.show()

# The vector is 1i + 2j
# The vector is 5i + 2j + 8k