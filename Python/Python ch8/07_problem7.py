
def rem(l, word): #removing an item
    for item in l:
        l.remove(word)
        return l


l = ["Harry", "Rohan", "Shubham", "an"]

print(rem(l, "an"))


#output ['Harry', 'Rohan', 'Shubham']


def rem(l, word):
    n=[]
    for item in l:
        if not(item == word):
            n.append(item.strip(word))
    return n


l = ["Harry", "Rohan", "Shubham", "an"]

print(rem(l, "an"))


#output ['Harry', 'Roh', 'Shubham'] this new list is list n not l