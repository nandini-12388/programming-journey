myList = [1, 2, 9, 5, 3, 5]

# squaredList = []
# for item in myList:
#     squaredList.append(item*item)

#This can be simplified using List Comprehension

squaredList = [i*i for i in myList]

print(squaredList)    


# Output
#[1, 4, 81, 25, 9, 25] 