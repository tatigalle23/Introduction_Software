import random
leng= int(input())

def getRandomString(leng):
    character= "abcdefghijklmnopqrstuvxyz"
    randomString= ""

    for i in range(leng):
        randomString= random.choice(character)
        print (randomString,end="")

getRandomString(leng)
