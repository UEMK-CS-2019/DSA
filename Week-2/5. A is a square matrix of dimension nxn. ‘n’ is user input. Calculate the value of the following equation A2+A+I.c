#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,j,k,s=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d ",&a[i][j]);
    int b[n][n];
    int c[n][n];
    int sum[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                s=s+ a[i][k]*a[k][j];
            }
            b[i][j]=s;
            s=0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                c[i][j]=1;
            else
                c[i][j]=0;
        }
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            sum[i][j]=b[i][j]+a[i][j]+c[i][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
