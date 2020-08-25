#include<stdio.h>
 
struct student
{
    int roll_no,marks;
}stud[100],t;
 
int main()
{
    int i,j,n;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&stud[i].roll_no);
    }
     for(i=0;i<n;i++)
    {
        scanf("%d",&stud[i].marks);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(stud[j].marks>stud[j+1].marks)
            {
                t=stud[j];
                stud[j]=stud[j+1];
                stud[j+1]=t;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d - %d\n",stud[i].roll_no,stud[i].marks);
    }
}
