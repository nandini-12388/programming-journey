sentence = input("Enter your sentence: ")
words = sentence.split()
largest = max(words, key=len)   #key = len is used to compare words based on their length.
smallest = min(words, key=len)

print(f"Largest word of the sentence is {largest}")
print(f"Smallest word of the sentence is {smallest}")