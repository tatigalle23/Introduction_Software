#include<stdio.h>

int main(){
    float n=1.23456789;
    float m=0.0000123456789;

    printf("%.10f %.10f \n", n,m);
    printf("%e %e \n", n,m);
    printf("%E %E \n", n,m);
    printf("%g %g \n", n,m);
    printf("%G %G \n", n,m);
}