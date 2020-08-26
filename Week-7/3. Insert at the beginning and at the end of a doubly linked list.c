#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *prev,*next;
};
struct node *CreateList(struct node *head,int a[],int l);
void DisplayList(struct node *head);
struct node *InsertBeginning(struct node *head,int beg);
struct node *InsertEnd(struct node *head,int end);

int main() {
    struct node *head=NULL;
    int i,beg,end,l;
    char a[50];
    scanf("%d",&beg);
    scanf("%d",&end);
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
    head=CreateList(head,ar,dd);
    head=InsertBeginning(head,beg);
    head=InsertEnd(head,end);
    DisplayList(head);
    return 0;
}
struct node *CreateList(struct node *head,int a[],int l)
{
    struct node tmp,*newnode=(struct node)malloc(sizeof(struct node));
    int i;
    if(newnode==NULL)
    {
        printf("Memory can not be allocated.");
        exit(0);
    }
    newnode->data=a[0];
    newnode->prev=NULL;
    newnode->next=NULL;
    head=newnode;
    tmp=head;
    for(i=1;i<l;i++)
    {
        struct node newnode=(struct node)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Memory can not be allocated.");
            exit(0);
        }
        newnode->data=a[i];
        newnode->next=NULL;
        tmp->next=newnode;
        newnode->prev=tmp;
        tmp=newnode;
    }
    return head;
}
void DisplayList(struct node *head)
{
    if(head==NULL)
    {
        printf("The list is empty.");
    }
    else
    {
        struct node *tmp=head;
        while(tmp!=NULL)
        {
            printf("%d ",tmp->data);
            tmp=tmp->next;
        }
    }
}
struct node *InsertBeginning(struct node *head,int beg)
{
    struct node newnode=(struct node)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory can't be allocated.");
        exit(0);
    }
    newnode->data=beg;
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=NULL;
    head=newnode;
    return head;
}
struct node *InsertEnd(struct node *head,int end)
{
    struct node tmp=head,*newnode=(struct node)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory can't be allocated.");
        exit(0);
    }
    newnode->data=end;
    newnode->next=NULL;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    newnode->prev=tmp;
    return head;
}
