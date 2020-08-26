[13:03, 8/26/2020] Sanchari CST UEM: #include<stdio.h>
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
    int i,pos,l;
    char a[50];
    scanf("%d",&pos);
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
    p->data=ar[0];
    for(i=1;i<l;i++)
    {
        p->link2=(struct node*)malloc(sizeof(struct node));
        p=p->link2;
        p->data=ar[i];
    }
    p->link2=NULL;
    p=h;
    int c=1;
    if(pos==1)
    {
        p=p->link…
[13:03, 8/26/2020] Sanchari CST UEM: #include<stdio.h>
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
