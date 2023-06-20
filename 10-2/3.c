#include<stdio.h>

int main(){
    double n[5];
    double *pn=n;
    double sum=0;

    for(int i=0;i<5;i++){
        scanf("%lf", &n[i]);
    }
    for(int i=0;i<5;i++){
        *pn=n[i];
        printf("%lf \n", (*pn*2));
        sum+=(*pn*2);
    }
    printf("sum: %lf",sum);

}    