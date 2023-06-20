#include<stdio.h>
#define PI 3.141592

int main(){
    double r;
    scanf("%lf",&r);
    double p=2*PI*r;
    double a=PI*r*r;

    printf("Perimeter: %f\n", p);
    printf("Area: %f\n", a);

}