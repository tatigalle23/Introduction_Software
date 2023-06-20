#include <stdio.h>


int addTotal(n){
    if (n==1){
        return 1;
    }
    else return n+addTotal(n-1);
        
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d \n", addTotal(n));
    
}