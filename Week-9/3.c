#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int key,n,a[100],i,flag=0;
    scanf("%d",&key);
    scanf("%d",&n);
    int low=0,high=n-1,mid=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>a[mid])
            low=mid+1;
        else if(key<a[mid])
            high=mid-1;
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("element found in the position %d",mid+1);
    else
        printf("not found");
    return 0;
}
