#include<stdio.h>

int main(){
    int num[5];
    int max=0, min, sum=0;
    

    for(int i=0; i<5; i++){
        
        scanf("%d", &num[i]);
        
        for (int j = 0; j < 5; j++)
        {
            if (max<num[i]){
            max=num[i];
    
        }
        }
        sum+=num[i];
    }
    min=max;
    for(int i=0; i<4; i++){
        if (min>num[i]){
            min=num[i];
        }
    }
    printf("min: %d \n", min);
    printf("max: %d \n", max);
    printf("sum: %d \n", sum);
   return 0; 
}