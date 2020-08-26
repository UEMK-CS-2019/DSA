#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link1;
    struct node *link2;
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
    p->link1=NULL;
    p->data=m;
    for(i=0;i<l;i++)
    {
        p->link2=(struct node*)malloc(sizeof(struct node));
        p=p->link2;
        p->data=ar[i];
    }
    p->link2=(struct node*)malloc(sizeof(struct node));
    p=p->link2;
    p->data=n;
    p->link2=NULL;
    p=h;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->link2;
    }
}
