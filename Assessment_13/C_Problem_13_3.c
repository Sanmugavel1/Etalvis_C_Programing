#include <stdio.h>
#include<stdlib.h>
struct student 
{
    int id;
    int maths;
    int science;
    struct student* next;
};
typedef struct student node;
node* head=NULL;
void insert(int i,int m,int s,int c,char p)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->id=i;
    temp->maths=m;
    temp->science=s;
    if(p=='A'||p=='a')
    {
        int a=0;
        node *temp1=head;
        while(temp1!=NULL)
        {
            if(temp1->id==c)
            {
                a=1;
                break;
            }
            temp1=temp1->next;
            
        }
        if(a!=0)
        {
            temp->next=temp1->next;
            temp1->next=temp;
            printf("Successfully Inserted...\n");
        }
        else
        printf("The Given Id is not found...");
        
    }
    else if(p=='B'||p=='b')
    {
        int a=0;
        node *temp1=head,*temp2;
        if(temp1->id!=c)
        {
            while(temp1!=NULL)
            {
                temp2=temp1;
                temp1=temp1->next;
                if(temp1->id==c)
                {
                    a++;
                    break;
                }
            }
            if(a!=0)
            {
                temp->next=temp2->next;
                temp2->next=temp;
                printf("Successfully Inserted...\n");
            }
            else
            printf("The Given Id is not found...");
        }
        else
        {
            temp->next=head;
            head=temp;
        }
        
    }
    else
    {
        temp->next=NULL;
        if(head==NULL)
        head=temp;
        else
        {
            node *temp1=head;
            while(temp1->next!=NULL)
            temp1=temp1->next;
            
            temp1->next=temp;
        }
        printf("Successfully Inserted...\n");
    }
}
void display()
{
    node* temp=head;
    while(temp!=NULL)
    {
            printf("Id:%d\n",temp->id);
            printf("Maths:%d\n",temp->maths);
            printf("Science:%d\n",temp->science);
            temp=temp->next;
    }
}
void delete(int i)
{
    node* temp=head,* temp1;
    int a=0;
    if(temp->id!=i)
    {
        while(temp!=NULL)
        {
            temp1=temp;
            temp=temp->next;
            if(temp != NULL && temp->id == i)
            {
                a++;
                break;
            }
        }
        if(a!=0)
        {
            temp1->next=temp->next;
            printf("Element Deleted!\n");
        }
        else
        printf("ID not found...\n");
    }
    else
    {
        head=head->next;
        printf("Element Deleted!\n");
    }
}
int main() {
    int choice;
    insert(1,100,100,1,'L');
    insert(2,100,100,1,'L');
    insert(3,100,99,1,'L');
    insert(4,99,100,1,'L');
    insert(5,100,99,1,'L');
    while(1)
    {
        printf("1.Insert:\n2.Delete\n3.Display:\n4.Exit:");
        scanf("%d",&choice);
        if (choice==4)
        break;
        switch(choice)
        {
            case 1:
            int i,m,s,c;
            char p;
            printf("Enter ID:\n");
            scanf("%d",&i);
            printf("Enter Maths marks:\n");
            scanf("%d",&m);
            printf("Enter Science marks:\n");
            scanf("%d",&s);
            printf("Enter position to be inserted(A for after or b for before):\n");
            scanf(" %c",&p);
            printf("Enter ID(for inserting after or before):\n");
            scanf("%d",&c);
            insert(i,m,s,c,p);
            break;
            case 2:
            printf("Enter the ID to be deleted:");
            scanf("%d",&c);
            delete(c);
            break;
            case 3:
            display();
            break;
            default:
            printf("Enter Valid Choice...\n");
        }
    }
    return 0;
}