#include<stdio.h>
int main()
{
    int n,key,a[100],flag=0;
    scanf("%d",&n);
    scanf("%d",&key);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=0;
    int u=n-1;
    int mid;
    while(l<=u)
    {
        mid=l+(l-u)*((key-a[l])/(a[u]-a[l]));
        if (key==a[mid])
        {
            flag=1;
            break;
        }
        else if(key<a[mid])
            u=mid-1;
        else
            l=mid+1;
    }
    if(flag==1)
        printf("found\n");
    else
        printf("not found\n");
    
}
