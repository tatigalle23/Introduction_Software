n=int(input())
m=int(input())
   
    
def add(n,m):
    addT=n+m
    return addT
def sub(n,m):
    subT=n-m
    return subT
def mul(n,m):
    mulT=n*m
    return mulT
def div(n,m):
    divT=n/m
    return divT
def mod(n,m):
    modT=n%m
    return modT
def printMsg():
    print("Completed")
    

print("Sum: "+str(add(n,m))+"\n"+"difference: "+ str(sub(n,m))+"\n"+"product: "+str(mul(n,m))+"\n"+"division: "+ str(div(n,m))+"\n"+"remainder: "+ str(mod(n,m)))
printMsg()
