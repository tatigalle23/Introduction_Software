
def wordCount():
    word= input().split( )
    dictWord={}
    for  word in word:
        if word in dictWord:
            dictWord[word]+=1
        else:
            dictWord[word]=1

    for word in dictWord:
        num= dictWord[word]
        print(word,": ",num)
               

wordCount()
