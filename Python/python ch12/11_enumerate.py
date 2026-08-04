l = [3, 513, 53, 535]

# index = 0
# for item in l:
#     print(f"The item number {index} is {item}")
#     index += 1

#This can be simplified using enumerate function

for index, item in enumerate(l):
    print(f"The item number at index {index} is {item}")


#Output
# The item number at index 0 is 3
# The item number at index 1 is 513
# The item number at index 2 is 53
# The item number at index 3 is 535    