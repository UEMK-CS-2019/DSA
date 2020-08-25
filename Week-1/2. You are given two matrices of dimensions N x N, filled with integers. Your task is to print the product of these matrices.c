#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  int i,j, k, sum = 0,a=0;
  int first[2][2], second[2][2], multiply[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            a++;
            first[i][j]=a;
        }   
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
             a++;
            second[i][j]=a;
        }   
    }
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
        for (k = 0; k < 2; k++) {
          sum = sum + first[i][k]*second[k][j];
        }
 
        multiply[i][j] = sum;
        sum = 0;
      }
    }
    printf("The multiplication of two matrices is :\n");
    for(i=1;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("%d      ",multiply[i][j]);
        }
        printf("\n");
    }
}
