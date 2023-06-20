n=int(input())

def addTotal(n):
    total=0
    if n>1 and n<10:
        for i in range (1,n+1):
            total=total+i
            i=i+1
    return total

def mulTotal(n):
    global gMul
    gMul=1
    if n>1 and n<10:
        for i in range(1,n+1):
            gMul=gMul*i
            i=i+1
    print ("gMul: "+str(gMul))
            
print("addTotal(): "+str(addTotal(n)))
mulTotal(n)



            
    

