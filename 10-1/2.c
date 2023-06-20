#include<stdio.h>

int main(){
    int i;
    double d;
    char c;
    scanf("%d %lf %c", &i,&d,&c);
    printf("i: %d %p \n", i,&i);
    printf("d: %lf %p\n", d,&d);
    printf("c: %c %p \n", c,&c);
    printf("\n \n");

    int *pi=&i;
    double *pd=&d;
    char *pc=&c;

    printf("i+1: %d  \n", *pi+1);
    printf("d+1: %lf \n", *pd+1);
    printf("c+1: %c  \n", *pc+1);
    printf("\n \n");
    
    printf("size of pi: %d \n", sizeof(pi));
    printf("size of pd: %d \n", sizeof(pd));
    printf("size of pc: %d \n", sizeof(pc));
    
}