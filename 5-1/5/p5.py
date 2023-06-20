import random


def getRandomString(leng):
    global string
    
    ls=list()
    string= ""

    if leng>=10 and leng<=30:
        for i in range(leng):
            word= chr(random.randint(97,97+25))
            ls.append(word)

        string=''.join(ls)
    print ("Generated Cheese is '"+string+"'")
    print ("Mouse starts eating!!")


    n=list()
    
    text=''
    tries=10
    for i in range(tries):
        w= chr(random.randint(97,97+25))
        n.append(w)
        text+=w
        print("Start eating '"+w+"'")
        
        print("Eaten alphabet of cheese : "+text+" ")
        print("Original cheese : ",string)
        print("Current cheese status : ", end="")
    
        
        fail=0
        for w in string:
                
            if w in text:
                print(w, end="")
                
            else:
                print("_",end="")
                fail+=1

        if fail==0:
            print("")
            print("Out of cheese")
            break
        
        print("\n")
        

        if w not in text:
            tries=tries-1
            print("")
        if tries==0:
            print("Finally remained Cheese Status :")
            print("Eaten alphabet of chees : "+text+" ")
            print("Original cheese : ",string)
            print("Current cheese status : ", end="")
            break


leng=int(input("Input the length of the string: "))
getRandomString(leng)


