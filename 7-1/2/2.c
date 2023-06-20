#include<stdio.h>

int main(){
    int n,m,x;
    scanf("%d %d %d", &n,&m,&x);
    
    int max,min;
    if (n>m){
        if(n>x){
            max=n;
        }
        else{
            max=x;
        }
    }
    else{
        if(m>x){
            max=m;            
        }
        else{
            max=x;
        }
    }

    if (n<m){
        if(n<x){
            min=n;
        }
        else{
            min=x;
        }
    }
    else{
        if(m<x){
            min=m;            
        }
        else{
            min=x;
        }
    }

    printf("min: %d \n", min);
    printf("max: %d \n", max);
}
