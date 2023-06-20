#include<stdio.h>


int fact(x){
    if(x>=1){
        return x*fact(x-1);
    }
    else{
        return 1;
    }
}

int ncr(n,r){
    return fact(n)/(fact(r)*fact(n-r));

}

int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    printf("%d", ncr(n,r));
}