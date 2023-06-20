#include<string.h>
#include<stdio.h>
#include<ctype.h>

int main(){
    char a[10];
    scanf("%s", &a);
    for(int i=0; i<strlen(a);i++){
        if(a[i]>= 'a' && a[i] <= 'z'){
           a[i]=toupper(a[i]); 
        }
        else{
            a[i]=tolower(a[i]);

        }
        
    }
    printf("%s",a);
}