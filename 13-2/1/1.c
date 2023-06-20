#include<stdio.h>


 void swap(char** a, char** b){
    
    const char *temp= *a;
    *a=*b;
    *b=temp;
   
}

void printArray(char** arr, int len){
    
    for(int i=0; i<len-1; i++){
        printf("Array [%d]:%s, ", i,arr[i]);
    }
    printf("\n");
    
}

int main(){
    char* arr[2]={"aaa","bbb"};
    printArray(arr, strlen(arr));
    swap(&arr[0], &arr[1]);
    printArray(arr, strlen(arr));
    
}