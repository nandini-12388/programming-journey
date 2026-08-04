def myFunc():
    print("Hello world!")

if __name__ == "__main__":
    #If this code is directly executed by running the file its present in.
    print("we are directly running this code")
    myFunc()
    print(__name__)
    # We do this when we don't want the code to import and run in any other file. 



#Output
# we are directly running this code
# Hello world!
# __main__  #same file mei run karne se __main__ output aayega.