#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i=1;
    while (i<=9){
        int mult=n*i;
        printf("%d*%d=%d \n",n,i,mult);
        i++;
       
    }

}