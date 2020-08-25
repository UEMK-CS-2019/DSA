#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int coeff;
    int exp;
    struct node *next;
};
struct node *CreateList(struct node *head,int n);
void DisplayList(struct node *head);
struct node *PolyAdd(struct node *head1,struct node *head2,struct node *head3);
struct node *AddPolyNode(struct node *head,int c,int e);
int main()
{
    struct node *head1=NULL,*head2=NULL,*head3=NULL;
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    while(n1>=0)
    {
        head1=CreateList(head1,n1);
        n1--;
    }
    while(n2>=0)
    {
        head2=CreateList(head2,n2);
        n2--;
    }
    head3=PolyAdd(head1,head2,head3);
    DisplayList(head3);
    return 0;
}
struct node *CreateList(struct node *head,int n)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory underflow. No insertion possible.");
        exit(0);
    }
    int a;
    scanf("%d",&a);
    newnode->coeff=a;
    newnode->exp=n;
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
        printf("The list is empty");
    }
    else
    {
        struct node *ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->next==NULL)
            {
                printf("%d",ptr->coeff);
            }
            else if(ptr->exp==1)
            {
                printf("%dx + ",ptr->coeff);
            }
            else
            {
                printf("%dx^%d + ",ptr->coeff,ptr->exp);
            }
            ptr=ptr->next;
        }
    }
}
struct node *AddPolyNode(struct node *head,int c,int e)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory underflow. No insertion possible.");
        exit(0);
    }
    newnode->coeff=c;
    newnode->exp=e;
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
struct node *PolyAdd(struct node *head1,struct node *head2,struct node *head3)
{
    struct node *ptr1=head1,*ptr2=head2;
    while(ptr1!=NULL&&ptr2!=NULL)
    {
        if(ptr1->exp==ptr2->exp)
        {
            head3=AddPolyNode(head3,ptr1->coeff+ptr2->coeff,ptr1->exp);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if(ptr1->exp>ptr2->exp)
        {
            head3=AddPolyNode(head3,ptr1->coeff,ptr1->exp);
            ptr1=ptr1->next;
        }
        else
        {
            head3=AddPolyNode(head3,ptr2->coeff,ptr2->exp);
            ptr2=ptr2->next;
        }
    }
    if(ptr1!=NULL)
    {
        while(ptr1!=NULL)
        {
            head3=AddPolyNode(head3,ptr1->coeff,ptr1->exp);
            ptr1=ptr1->next;
        }
    }
    if(ptr2!=NULL)
    {
        while(ptr2!=NULL)
        {
            head3=AddPolyNode(head3,ptr2->coeff,ptr2->exp);
            ptr2=ptr2->next;
        }
    }
    return head3;
}
