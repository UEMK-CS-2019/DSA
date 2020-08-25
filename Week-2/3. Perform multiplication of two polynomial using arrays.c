#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,n1,n2,j,k;
    scanf("%d %d",&n1,&n2);
    int a1[n1+1];
    int a2[n2+1];
    int a3[n1+n2+1];
    for(i=n1;i>=0;i--)
    {
        scanf("%d",&a1[i]);
    }
    for(i=n2;i>=0;i--)
    {
        scanf("%d",&a2[i]);
    }
    for(i=n1+n2;i>=0;i--)
    {
        a3[i]=0;
    }
        for(j=n1;j>=0;j--)
        {
            for(k=n2;k>=0;k--)
            {
                a3[k+j]+=(a1[j]*a2[k]);
            }
        }
    for(i=n1+n2;i>=2;i--)
    {
        printf("%dx^%d + ",a3[i],i);
    }
    printf("%dx + ",a3[1]);
    printf("%d",a3[0]);
    return 0;
}
