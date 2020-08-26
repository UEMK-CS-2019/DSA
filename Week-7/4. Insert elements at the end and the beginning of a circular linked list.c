#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int i,m,n,l;
    char a[50];
    scanf("%d",&m);
    scanf("%d",&n);
    getchar();
    fgets(a,50,stdin);
    l=(strlen(a)/2);
    int ar[l];
    int dd=0,r;
    for(i=0;i<strlen(a);i++)
    {
        if((int)a[i]>=48)
        {
            r=(int)a[i]-48;
            ar[dd++]=r;
        }
    }
    l++;
    struct node *p,*h;
    p=h=(struct node*)malloc(sizeof(struct node));
    p->data=m;
    for(i=0;i<l;i++)
    {
        p->link=(struct node*)malloc(sizeof(struct node));
        p=p->link;
        p->data=ar[i];
    }
    p->link=(struct node*)malloc(sizeof(struct node));
    p=p->link;
    p->data=n;
    p->link=h;
    p=h;
    printf("%d ",p->data);
    p=p->link;
    while(p!=h)
    {
        printf("%d ",p->data);
        p=p->link;
    }
}
