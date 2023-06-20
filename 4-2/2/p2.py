def problemDescription():
    global n1,n2
    print("* Number of divisors *")
    print("Type the first number:")
    n1=int(input())
    print("Type the sencond number:")
    n2=int(input())

    return n1,n2

    

def getNumOfDivisisor(n):
    numT1=0
        
    for i in range(1,n+1):
        if n%i==0:
            numT1=numT1+1
    return numT1

problemDescription()
print("Number of divisors of the first number is:"+str(getNumOfDivisisor(n1)))
print("Number of divisors of the second number is:"+str(getNumOfDivisisor(n2)))

