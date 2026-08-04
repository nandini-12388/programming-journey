class rectangle:
    def __init__(self, length, breadth):
        self.length = length
        self. breadth = breadth                                                                                                                                                                 

    def Calculate_Area(self):
        area = self.length * self.breadth
        print(f"The area of the rectangle is {area}")

rect = rectangle(4, 6)
rect.Calculate_Area()


