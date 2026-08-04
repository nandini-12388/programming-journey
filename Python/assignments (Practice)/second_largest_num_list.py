l=[2, 45, 67, 32, 14, 93, 0, 79]

unique_list = list(set(l)) #This is used to remove duplicate elements in case present any as sets do not contain duplicate values. 
second_largest = sorted(unique_list)[-2]

print(f"The second largest number is {second_largest}")


#[-1] means first largest
#[-2] means second largest