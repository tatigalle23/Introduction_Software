n=int(input())

def printLine(n):
    
    for i in range(1,n+1):
        print("")
        for j in range(1,i+1):
            print(j,end=" ")
    for k in range(n,0,-1):
        print("")
        for l in range(1,k+1):
            print(l,end=" ")
    
        
printLine(n)
