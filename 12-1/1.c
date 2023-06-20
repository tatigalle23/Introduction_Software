#include<stdio.h>


void square(double* pi){
    *pi*=*pi;

}

int main(){
    double dvar;
    scanf("%lf", &dvar);
    square(&dvar);
    printf("%f", dvar);

}