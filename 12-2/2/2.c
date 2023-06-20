#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    char name[7];
    int score;
}Person;

void printScoreStars(Person* persons, int len){
    int count[3];       
    for (int i = 0; i < len; i++)
    {
        count[i]=persons[i].score/5;
        printf("%s \t", persons[i].name);
        for (int j = 0; j < count[i]; j++)
        {
            printf("*");
        }printf("\n");
    }
}
int main(){
    Person a[3];
    int len=3;
    int count=0;

    for (int i=0; i<len; ++i){
        scanf("%s %d", &a[i].name,&a[i].score);
    }
    printScoreStars(&a, len);      
}