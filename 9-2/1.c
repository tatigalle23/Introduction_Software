#include <stdio.h>


int printLine(n){
    
    for (int i=1; i<=n; i++){
        printf("\n");
        for (int j=1; j<=i; j++){
            printf("%d ", j);
        }
    }   
    for (int k=n; k>=0; k--){
        printf("\n");
        for (int l=1; l<=k; l++){
            printf("%d ", l);
        }
    }
}
    
int main(){
     int n;
     scanf("%d", &n);
     printLine(n);
}      
