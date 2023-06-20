#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; ++i){
        int j;
        for(j=0; j < i; ++j){
            printf("*");
        }
        printf("\n");
    }        

}
