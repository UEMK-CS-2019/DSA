#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *CreateList(struct node *head);
void DisplayList(struct node *head);
struct node *DeleteOdd(struct node *head);
int main()
{
    int n,i=1;
    struct node *head=NULL;
    scanf("%d",&n);
    while(i<=n)
    {
        head=CreateList(head);
        i++;
    }
    head=DeleteOdd(head);
    DisplayList(head);
    return 0;
}
struct node *CreateList(struct node *head)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int i;
    if(newnode==NULL)
    {
        printf("Memory underflow. Insertion not possible.");
        exit(0);
    }
    scanf("%d",&i);
    newnode->data=i;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node *ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->prev=ptr;
    }
    return head;
}
struct node *DeleteOdd(struct node *head)
{
    struct node *ptr=head,*del,*q,*p;
    while(ptr!=NULL)
    {
        if(ptr->data%2!=0)
        {
            if(ptr==head)
            {
                del=ptr;
                ptr=ptr->next;
                ptr->prev=NULL;
                head=ptr;
                del->next=NULL;
                free(del);
            }
            else
            {
                del=ptr;
                ptr=ptr->next;
                q=del->prev;
                p=del->next;
                q->next=p;
                if(p!=NULL)
                {
                    p->prev=q;
                }
                del->next=del->prev=NULL;
                free(del);
            }
        }
        else
        {
            ptr=ptr->next;
        }
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
        struct node *ptr=head;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}
