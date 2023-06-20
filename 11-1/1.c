#include<stdio.h>
#include<string.h>

int main(){
    char a[10];
    char b[10];

    scanf("%s", &a);
    scanf("%s", &b);

    printf("str1: %s\n", a);
    printf("str2: %s\n", b);
    printf("length of str1: %d\n", strlen(a));
    printf("lenght of str2: %d\n", strlen(b));
    printf("str1+str2: %s\n", strcat(a,b));

    if (!strncmp(a,b,strlen(b))==0){
        printf("not same");
    }else{
        printf("same");
    }
    
}