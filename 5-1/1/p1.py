
def dictStudents():
    
    name1,score1=input().split( )
    name2,score2=input().split( )
    name3,score3=input().split( )
        
    student1={name1:score1, name2:score2, name3:score3}
    

    print("Which student's score?")
    nameStu= input()

    if nameStu in list(student1.keys()):
        
        print(nameStu+"'s score: ",student1[nameStu])
              
    else:
        return print(nameStu+" is not in the database")

    

dictStudents()    

