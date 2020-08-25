#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *CreateList(struct node *head);
void DisplayList(struct node *head);
struct node *InsertList(struct node *head,int n,int p);
int main()
{
    int x,n,p,i=0;
    struct node *head=NULL;
    scanf("%d %d %d",&x,&n,&p);
    while(i<x)
    {
        head=CreateList(head);
        i++;
    }
    head=InsertList(head,n,p);
    DisplayList(head);
    return 0;
}
struct node *CreateList(struct node *head)
{
    int a;
    struct node *ptr,*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory insertion not possible.");
        exit(0);
    }
    scanf("%d",&a);
    newnode->data=a;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
    return head;
}
void DisplayList(struct node *head)
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("The list is empty.");
    }
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}
struct node *InsertList(struct node *head,int n,int p)
{
    int i=1;
    struct node *ptr=head,*ptr1;
    while(ptr!=NULL&&i<p)
    {
        ptr1=ptr;
        ptr=ptr->next;
        i++;
    }
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory underflow. No insertion possible.");
        exit(0);
    }
    newnode->data=n;
    newnode->next=NULL;
    newnode->next=ptr1->next;
    ptr1->next=newnode;
    return head;
}
