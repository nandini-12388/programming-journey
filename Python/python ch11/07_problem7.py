class Vector:
    def __init__(self, l):
        self.l = l

    def __len__(self):
        return len(self.l)

#Test the implementation
v1 = Vector((1, 2, 3)) # l is a list thats why it should be inside bracket/parentheses.
print(len(v1)) #3 