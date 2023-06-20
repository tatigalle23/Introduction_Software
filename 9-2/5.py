def fact(x):
    if(x>=1):
        return x*fact(x-1)
    
    else:
        return 1
    
def ncr(n,r):
    
    return fact(n)/(fact(r)*fact(n-r))
    

n,r= input().split(" ")
n=int(n)
r=int(r)
print(ncr(n,r))
