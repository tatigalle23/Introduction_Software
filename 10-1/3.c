#include<stdio.h>

int main(){
    char i[]="";
    scanf("%s",i);

    int cont1=0;
    char *pi=i;

     while(*(pi+cont1)){
        cont1++;
        
    }
    
    printf("%d \n",cont1);

}