def main():
    try:
        a = int(input("Hey, Enter a number: "))
        print(a) 
        return


    except Exception as e:
        print(e) 
        return


    finally:
        print("Hey I am inside of finally")   

main() 

#Once we write return, the rest of the code won't run.
#In that case, we use finally to make the code run under any circumstances.
#It is useful for functions. In normal scenario print also does the same work as finally so it is not really needed there.