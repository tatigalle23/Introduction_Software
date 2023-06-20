#include <stdio.h>
    
int add(n,m){
    int addT=n+m;
    return addT;
}

int sub(n,m){
    int subT=n-m;
    return subT;
}   
int mul(n,m){
    int mulT=n*m;
    return mulT;
}
float div(float n,float m){
    float divT=n/m;
    return divT;
}
int mod(n,m){
    int modT=n%m;
    return modT;
}
void printMsg(){
    printf("Completed");
    
}    
    
int main(){
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    printf("Sum: %d \n",add(n,m));
    printf("difference: %d \n",sub(n,m));
    printf("product: %d \n",mul(n,m));
    printf("division: %f \n",div(n,m));
    printf("remainder: %d \n",mod(n,m));
    printMsg();
   
}