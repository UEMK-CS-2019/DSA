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
        p=p->link2;
        p->link1=NULL;
        free(h);
        h=p;
    }
    else if(pos>l)
    {
        struct node *xx;
        xx=(struct node*)malloc(sizeof(struct node));
        while(p->link1!=NULL)
        {
            xx=p;
            p=p->link1;
        }
        xx->link2=NULL;
        free(p);
    }
    else
    {
        struct node *q,*gh;
        q=(struct node*)malloc(sizeof(struct node));
        gh=(struct node*)malloc(sizeof(struct node));
        while(c<pos)
        {
            q=p;
            p=p->link2;
            gh=p->link2;
            c++;
        }
        q->link2=gh;
        gh->link1=q;
        free(p);
    }
    p=h;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->link2;
    }
}
