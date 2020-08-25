arr = [1, 2, 3, 4, 5,6,7,8,9];     
sum = 0;    
     
#Loop through the array to calculate sum of elements    
for i in range(0, len(arr)):    
   sum = sum + arr[i];    
     
print("The sum of all array elements is :" + str(sum));    


-----------------------------------OR---------------------------
#include <stdio.h>

// function to calculate the sum of array
// elements
int sum_of_elements(int *arr , int n)
{
   int i=0,sum=0;
   
   for(i=0; i<n ; i++)
   {
       sum = sum + arr[i];
   }
   
   return sum;
}

// main function
int main()
{
    int total = 0;
    int array[10] = {1,2,3,4,5,6,7,8,9};
    
    // Passing array to Function
    total = sum_of_elements(array,9);
    
    printf("The sum of all array elements is :%d", total);
    
    return 0;
}
