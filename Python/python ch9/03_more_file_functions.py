f = open("file.txt")

# lines = f.readlines()

# print(lines, type(lines))

# f.close

#output
#['Harry is a good boy\n', 'I am a second line\n', 'This is amazing\n', 'Twinkle Twinkle little star'] 
# <class 'list'>  

line = f.readline()
while(line != ""):
    print(line)
    line = f.readline()

f.close    

#output (to read all the lines one by one) 
# Their type is <class 'str'> 

# Harry is a good boy

# I am a second line

# This is amazing

# Twinkle Twinkle little star
