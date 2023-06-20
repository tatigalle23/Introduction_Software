#include<stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* pi;
    
    scanf("%d", &n);

    pi = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d", &pi[i]);
    }
    int max=pi[0];
    int min=max;
    
	for (int i=1; i<n; i++)
	{
		if (pi[i] > max) max = pi[i];
		if (pi[i] < min) min = pi[i];
	}
	
    printf("min: %d \n", min);
    printf("max: %d \n", max);


    free(pi);
    return 0;

}