#include <stdio.h>
 
int main()
{
   int array[100], position, c, n, value;
   scanf("%d", &n);


 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 

   scanf("%d", &position);
 

   scanf("%d", &value);
 
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
 
   array[position-1] = value;
 

 
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
 
   return 0;
}
