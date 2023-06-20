#include<stdio.h>

int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    int *pa=&arr[0];
    int *pb=&arr[4];
    int n;
    for(int i=0;pa<pb;i++){
        n=*pa;
        *pa=*pb;
        *pb=n;

        pa++;
        pb--;
    }

    for(int i=0;i<5;i++){
        printf("%d ", arr[i]); 
    }
}