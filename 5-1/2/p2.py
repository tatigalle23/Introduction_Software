import random

def getRandomNum():
    
    maxNum=int(0)
    
    for i in range(1,100):
        randomList=random.randint(0,1000)
        
        print (randomList,end=" ")
    
        if (randomList>maxNum):
            maxNum=randomList
    print ("\n")
    print ("Max num: ", maxNum)
     


        
   

getRandomNum()

