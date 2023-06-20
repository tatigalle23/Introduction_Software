#include <stdio.h>
int gMul=1;

int addTotal(n){
    int total=0;
    int i;
    if (n>1 && n<10){
        for (i=0; i<n+1; i++){
            total+=i;
            
        }
    }
    return total;
}

void mulTotal(n){
    
    int i;
    if (n>1 && n<10){
        for (i=1; i<n+1; i++){
            gMul*=i;
            
        } 
    printf("gMul: %d", gMul);   
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    printf("addTotal(): %d \n", addTotal(n));
    mulTotal(n);
}