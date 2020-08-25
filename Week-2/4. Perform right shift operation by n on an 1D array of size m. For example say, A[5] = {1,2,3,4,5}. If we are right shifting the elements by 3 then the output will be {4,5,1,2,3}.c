#include <stdio.h>  
   
int main()  
{   
    int arr[100];
    int length,n;
    scanf("%d",&length);
    scanf("%d",&n);
    for (int i = 0; i < length; i++) 
    {   
        scanf("%d",&arr[i]); 
    }    
    for(int i = 0; i < n; i++)
    {  
        int j, first;
        first = arr[0];  
      
        for(j = 0; j < length-1; j++)
        {   
            arr[j] = arr[j+1];  
        }
        arr[j] = first;  
    }  
    for(int i = 0; i < length; i++){  
        printf("%d ", arr[i]);  
    }  
    return 0;  
}
