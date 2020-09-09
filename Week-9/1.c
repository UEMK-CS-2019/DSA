#include<stdio.h>
int main()
{
    int n,key,a[100];
    scanf("%d",&n);
    scanf("%d",&key);
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("found\n");
    else
        printf("not found\n");
}
