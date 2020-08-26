#include "string.h"
#include<stdio.h>
#include <stdlib.h>
struct node
{
    int i;
    struct node *next;
    struct node *prev;
}*head=NULL,*pre;
void in(int l)
{
    scanf("%d",&l);
    struct node *temp=malloc(sizeof(struct node));
    
    if(head==NULL)
    {
        temp->i=l;
        temp->next=NULL;
        temp->prev=NULL;
         head=temp; 
         pre=head;
    }else
    {
        temp->i=l;
        temp->next=NULL;
        pre->next=temp;
        temp->prev=pre;
        pre=pre->next;
    }
}
void show()
{
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->i);
        temp=temp->prev;
    }
}
int main() {
    int j=0,no[100],k;
    char num[100];
    no[0]=0;
    fgets(num,100,stdin);
    for(int i=0;i<strlen(num);i++)
    {
        if(num[i]==' ')
        {
            j++;
            no[j]=0;
        }
        else
        {
            no[j]=no[j]*10+((int)num[i]-48);
        }
            
    }
    for(int i=0;i<=j;i++)
    {
        k=no[i];
        in(k);
    }
    show();  
    return 0;
}
