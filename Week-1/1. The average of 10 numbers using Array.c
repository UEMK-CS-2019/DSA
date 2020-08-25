#include <stdio.h>

int main() {
   int array[10] = {1,2,3,4,5,2,3,1,4,5};
   int sum, loop;
   float avg;

   sum = avg = 0;
   
   for(loop = 0; loop < 10; loop++) {
      sum = sum + array[loop];
   }
   
   avg = (float)sum / loop;
   printf("Average of array values is %.f", avg);   
   
   return 0;
}
