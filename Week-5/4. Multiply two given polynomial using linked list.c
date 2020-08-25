#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coeff;
    int exp;
    struct node *next;
};
struct node *CreateList(struct node *head,int e);
void DisplayList(struct node *head);
struct node *MulPoly(struct node *head1,struct node *head2,struct node *head3);
struct node *CreateNodeMul(struct node *head,int c,int i);
struct node *CommonReduction(struct node *head);
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
    head3=MulPoly(head1,head2,head3);
    DisplayList(head3);
    return 0;
}
struct node *CreateList(struct node *head,int e)
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
struct node *MulPoly(struct node *head1,struct node *head2,struct node *head3)
{
    int c,e;
    struct node *ptr1=head1,*ptr2;
    while(ptr1!=NULL)
    {
        ptr2=head2;
        while(ptr2!=NULL)
        {
            c=(ptr1->coeff)*(ptr2->coeff);
            e=(ptr1->exp)+(ptr2->exp);
            head3=CreateNodeMul(head3,c,e);
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    head3=CommonReduction(head3);
    return head3;
}
struct node *CreateNodeMul(struct node *head,int c,int e)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory underflow. No insertion possible.");
        exit(0);
    }
    newnode->exp=e;
    newnode->coeff=c;
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
struct node *CommonReduction(struct node *head)
{
    struct node *ptr1=head,*ptr2,*del;
    while(ptr1->next!=NULL)
    {
        ptr2=ptr1;
        while(ptr2->next!=NULL)
        {
            if(ptr1->exp==ptr2->next->exp)
            {
                ptr1->coeff+=ptr2->next->coeff;
                del=ptr2->next;
                ptr2->next=ptr2->next->next;
                del->next=NULL;
                free(del);
            }
            else
            {
                ptr2=ptr2->next;
            }
        }
        ptr1=ptr1->next;
    }
    return head;
}
