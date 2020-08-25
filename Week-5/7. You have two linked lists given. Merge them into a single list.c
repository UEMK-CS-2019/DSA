#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *CreateList(struct node *head);
struct node *CreateMergeList(struct node *head,int n);
void DisplayList(struct node *head);
struct node *MergeList(struct node *head1,struct node *head2,struct node *head3);
int main()
{
    struct node *head1=NULL,*head2=NULL,*head3=NULL;
    int n1,n2,i;
    i=1;
    scanf("%d %d",&n1,&n2);
    while(i<=n1)
    {
        head1=CreateList(head1);
        i++;
    }
    i=1;
    while(i<=n2)
    {
        head2=CreateList(head2);
        i++;
    }
    head3=MergeList(head1,head2,head3);
    DisplayList(head3);
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
struct node *CreateMergeList(struct node *head,int n)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory underflow. Insertion not possible.");
        exit(0);
    }
    newnode->data=n;
    newnode->next=NULL;
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
    }
    return head;
}
struct node *MergeList(struct node *head1,struct node *head2,struct node *head3)
{
    struct node *ptr1=head1,*ptr2=head2;
    while(ptr1!=NULL&&ptr2!=NULL)
    {
        if(ptr1->data<=ptr2->data)
        {
            head3=CreateMergeList(head3,ptr1->data);
            ptr1=ptr1->next;
        }
        else if(ptr1->data>ptr2->data)
        {
            head3=CreateMergeList(head3,ptr2->data);
            ptr2=ptr2->next;
        }
    }
    if(ptr1!=NULL)
    {
        while(ptr1!=NULL)
        {
            head3=CreateMergeList(head3,ptr1->data);
            ptr1=ptr1->next;
        }
    }
    if(ptr2!=NULL)
    {
        while(ptr2!=NULL)
        {
            head3=CreateMergeList(head3,ptr2->data);
            ptr2=ptr2->next;
        }
    }
    return head3;
}
