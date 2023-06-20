#include<stdio.h>
#include<string.h>

int palindrome(char a[10]){
    int leng=strlen(a);
    int cont=0;
    for(int i=0;i<strlen(a);i++){
             
        if(a[i]==a[leng-i-1]){
            cont=1;
        
        }else{
            cont=0;
        } 

    }return cont;

}

int main(){
    char a[10];
    char c[10];
    scanf("%s", a);
    int cont=palindrome(a);
    
    if(cont==1){
        printf("This is a palindrome");
    }else{
        printf("This is not a palindrome");
    }

}