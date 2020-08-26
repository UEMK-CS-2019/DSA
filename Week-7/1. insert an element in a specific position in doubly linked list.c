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
    int i,d,pos,l;
    char a[50];
    scanf("%d",&d);
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
    struct node *x;
    x=(struct node*)malloc(sizeof(struct node));
    if(pos==1)
    {
        x->data=d;
        h->link1=x;
        x->link2=h;
        x->link1=NULL;
        h=x;
    }
    else if(pos>l)
    {
        while(p->link1!=NULL)
        {
            p=p->link1;
        }
        x->data=d;
        p->link2=x;
        x->link1=p;
        x->link2=NULL;
    }
    else
    {
        struct node *q;
        q=(struct node*)malloc(sizeof(struct node));
        while(c<pos)
        {
            q=p;
            p=p->link2;
            c++;
        }
        x->data=d;
        q->link2=x;
        x->link1=q;
        x->link2=p;
    }
    p=h;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->link2;
    }
}
