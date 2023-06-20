count=0
n=int(input())

for i in range(1,n+1):
    if (i%2==0 or i%3==0):
        count=count+1
        print(i)
    
    
