#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{  
    int n,i;
    scanf("%d",&n);
    char a[n][20];
    for(i=0;i<n;i++)
        scanf("%s ",a[i]);
    for(i=0;i<n;i++)
        printf("%s\n",a[i]);
    return 0;
}
