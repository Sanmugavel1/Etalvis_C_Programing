#include <stdio.h>
#include <stdlib.h>
struct student
{
    int id;
    int maths;
    int science;
    struct student *next;
};
typedef struct student node;
node* front=NULL;
node* rear=NULL;
void Add(int i,int m,int s)
{
    node *temp=(node*)malloc(sizeof(node));
    if(front==NULL)
    {
        front=temp;
        rear=temp;
        temp->next=NULL;
    }
    else
    {
        rear->next=temp;
        rear=temp;
        temp->next=NULL;
    }
    temp->id=i;
    temp->maths=m;
    temp->science=s;
    printf("Successfully Inserted:\n");
}
void Remove()
{
    if(front==NULL)
    printf("Queue is empty!\n");
    else
    {
        node* temp=front;
        front=front->next;
        free(temp);
    }
    printf("Successfully Removed!");
}
void display()
{
    node* temp=front;
    while(temp!=NULL)
    {
            printf("Id:%d\n",temp->id);
            printf("Maths:%d\n",temp->maths);
            printf("Science:%d\n",temp->science);
            temp=temp->next;
    }
}
int main() {
    Add(1,100,100);
    Add(2,100,100);
    Add(3,100,99);
    Add(4,99,100);
    Add(5,100,99);
    while(1)
    {
        int choice,id,maths,science;
        printf("1.push(1)\n2.pop(2)\n3.Display(3)\n4.Exit(4)");
        scanf("%d",&choice);
        if(choice==4)
        break;
        switch(choice)
        {
            case 1:
            printf("Enter ID:");
            scanf("%d",&id);
            printf("\n Enter maths marks:");
        scanf("%d",&maths);
        printf("\n Enter science:");
        scanf("%d",&science);
        Add(id,maths,science);
        break;
        case 2:
        Remove();
        break;
        case 3:
        display();
        break;
        default:
        printf("Invalid Choice:\n");
        }
    }
    return 0;
}