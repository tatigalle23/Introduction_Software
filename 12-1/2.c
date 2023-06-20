#include<stdio.h>

struct point
{
    char name[10];
    int age;
    
};


int main(){
    struct point a;

    a.name;
    a.age;

    scanf("%s %d", &a.name, &a.age);
    printf("name: %s\n", a.name);
    printf("age: %d\n", a.age);

}