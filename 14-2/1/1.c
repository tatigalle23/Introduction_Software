#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[7];
    int score;
    
} Person;

void printScoreStars(Person* persons, int len){
    for (int i= 0; i< len; i++) {
        Person curPerson= persons[i];
        printf("%-8s", curPerson.name);
        for (int j = 0; j < curPerson.score/ 5; j++){
            printf("*");
        }printf("\n");
        
    }
}


int main(){
    Person* a = (Person*)malloc(sizeof(Person)*100);
    
    int count=0;
    for(int i=0;i>=0;i++){
        scanf("%s %d", a[i].name,&(a[i].score));
        if(strcmp(a[i].name,"END")==0 && (a[i].score==0)){
            break;
        }
        count++;
    }
   
    printScoreStars(a, count);
    free(a);
    
}