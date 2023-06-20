n=int(input())

def printStarDia(n):
    for i in range(n+1):
        print("", end=" ")
        space=n-i
        print(" "*space+"* "*i)
    for i in range(n,0,-1):
        print("", end=" ")
        space=n-i
        print(" "*space+"* "*i)
   
    
printStarDia(n)
