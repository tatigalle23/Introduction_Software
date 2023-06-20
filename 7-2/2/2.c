#include <stdio.h>

int main(){
    int i=1;
    while(i>0){
        char n;
        scanf("%s",&n);
        if (n>=48 && n<=57){
            printf("%c \n", n);
           i++; 
        }
        else if(n>=97 && n<=122 || n>=65 && n<=90 ){
            if (n >= 'a' && n <= 'z'){
                n = n - 'a' + 'A';
                printf("%c\n", n);
            }
            else{
                printf("%c\n", n);
            }
            i++;

        }
        else if(n>=0 && n<=47 || n>=58 && n<=64 || n>=91 && n<=96 || n>=123 && n<=127 ){
            
            printf("exit\n");
            i=0;
            break;
        }
    }      
}  