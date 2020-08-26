#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
void create(struct node **head,int n);
void display(struct node **head);
void delete(struct node **head,int pos);

int main()
{
    int pos,n;
    struct node *head=NULL;
    scanf("%d",&pos);
    n=pos+2;
    create(&head,n);
    delete(&head,pos);
    display(&head);
    return 0;
}
void create(struct node **head,int n)
{
    int i,data;
    struct node *prevnode,*newnode;
    prevnode=NULL;
    for(i=1;i<=n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        if(prevnode!=NULL)
            prevnode->next=newnode;
        if(*head==NULL)
            *head=newnode;
        prevnode=newnode;
    }
    prevnode->next=*head;
}
void display(struct node **head)
{
    struct node *current;
    int n=1;
    if(*head==NULL)
    {
        printf("\n List is empty.");
        return;
    }
    current=*head;
    do
    {
        printf("%d ",current->data);
        current=current->next;
        n++;
    }while(current!=*head);
}
void delete(struct node **head,int pos)
{
    if(*head==NULL)
    {
        printf("\n List is empty.");
    }
    else
    {
        int c=1;
        struct node *x,*y;
        x=*head;
        y=NULL;
        while(c<pos)
        {
            y=x;
            x=x->next;
            c++;
        }
        y->next=x->next;
        free(x);
    }
}
