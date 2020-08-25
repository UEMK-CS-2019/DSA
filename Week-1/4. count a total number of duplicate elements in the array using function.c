#include <stdio.h>  
   
int main() {  
    int inputArray[100];  
    int i, j, elementCount, count = 0;  
   
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers\n", elementCount);
     
    /* Read array elements */
    for(i = 0; i < elementCount; i++){
        scanf("%d", &inputArray[i]);
    }
   
    /* 
     * Take an element and compare it with all elements 
     * after that till we find a duplicate element  
     */ 
    for(i = 0; i < elementCount ; i++) {  
        for(j = i+1; j < elementCount; j++) {    
            if(inputArray[i]==inputArray[j]) {
            /* One Duplicate Element Found */ 
                count++;  
                break;  
            }  
        }  
    }  
   
    printf("Duplicate Element Count : %d\n", count);  
   
    return 0;  
}
