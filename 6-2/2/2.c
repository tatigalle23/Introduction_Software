#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    for (i = 1; i < 10; ++i){
        int mult=n*i;
        printf("%d*%d=%d \n",n,i,mult);
    }        

}
