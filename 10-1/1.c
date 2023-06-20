#include<stdio.h>

int sumNum(int *pi){
    int sum=*pi+10;
    *pi=sum;
    return *pi;

}

int main(){
    int i;
    scanf("%d",&i);
    int *pi=&i;
    printf("%d \n", *pi);
    sumNum(pi);
    printf("%d \n", *pi);


}