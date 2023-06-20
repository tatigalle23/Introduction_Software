n=int(input())

def addTotal(n):
    if (n==1):
        return 1
    
    else:
         return n+addTotal(n-1)

            
print("addTotal(): "+str(addTotal(n)))
mulTotal(n)
