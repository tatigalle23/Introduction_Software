#include <stdio.h>
#include <string.h>

char* scanWord (char *word){
    printf("Enter a word (Enter 'end' to quit): ");
    scanf("%s",word);
    return word;
}


int checkWord (char (*arr)[20],char* word,int count){
    for(int i=1;i<count;i++){
        if(strcmp(word,"end")==0){
            return 0;
        }else if(strcmp(word,arr[i-1])==0){
            return 1;        
        }
    } 
}

void printArr (char (*arr)[20],int count){
  char temp[10][20];
  int a, b;
  int counter=0;
    strcpy(temp[0],arr[0]); 
    b=1;
    for(int i= 0 ; i<count-1; i++){
        a= 0;
        while (a<b){
            if (strcmp(arr[i], temp[a])==0){
                break;
            }
            a++;
        }
        if (a==b){
            strcpy(temp[b],arr[i]);
            b++;
        }
        counter++;
    }
    
    printf("%d words in the list: \n",counter-1);
    for(int j=0; j<counter-1; j++)
    {
        printf("%s ",temp[j]);
    }printf("\n");
}

void searchWord (char (*arr)[20],int count){   

    char word[20];
    printf("\nEnter a word to search (Enter 'end' to quit):");
    scanf("%s",word);
    int a=0;
    while(strcmp(word,"end")!=0){
        for (int i=0; i<count; i++){
            if (strcmp(word, arr[i])==0){
                a=1;
                break;
            }
        }

        if (a==1){
            printf("This word is in the list.\n");
        }else{   
            printf("This word is NOT in the list.\n");
        }
        printf("Enter a word to search (Enter 'end' to quit):");
        scanf("%s",word);
        a=0;        
    }    
}

int main(){
    
    char arr[10][20];
    int count=0;
       

    for (int i=0;i<10;i++){
        char* word= scanWord(arr[i]);      
         count++;       
        int r= checkWord (arr, word,count);
        
        if (r==0){
            break;                    
        }else if (r==1){
            printf("This word already exists. Please enter another word\n");            
        }       
    }
    printArr(arr,count);
    searchWord (arr,count); 
    
}