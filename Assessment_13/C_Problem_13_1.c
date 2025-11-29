#include<stdio.h>
#include<stdlib.h>
struct student{
    int id;
    int maths;
    int science;
    struct student *next;
};
typedef struct student node;
struct student *head=NULL;
void insert(int i, int m,int s)
{
    struct student* temp = (node*)malloc(sizeof(node));

    if (head==NULL)
    {
        head=temp;
        temp->maths=m;
        temp->science=s;
        temp->id=i;
        temp->next=NULL;
    }
    else
    {
        struct student* temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->maths=m;
        temp->science=s;
        temp->id=i;
        temp->next=NULL;
    }
    printf("\n\t Data Inserted\n");
}
void traversal()
{
    if(head==NULL)
    {
        printf("\n NO Elements:");
        return;
    }
    struct student* temp=head;
    while(temp!=NULL)
        {
            printf("Id:%d\n",temp->id);
            printf("Maths:%d\n",temp->maths);
            printf("Science:%d\n",temp->science);
            temp=temp->next;
        }
    
}
int main()
{
    while(1)
    {
        int id,maths,science;
        printf("\n Enter Id:");
        scanf("%d",&id);
        if(id==-1)
        break;
        printf("\n Enter maths marks:");
        scanf("%d",&maths);
        printf("\n Enter science:");
        scanf("%d",&science);
        insert(id,maths,science);
    }
    traversal();
}