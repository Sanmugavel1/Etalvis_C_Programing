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
node* current=NULL;
void push(int i,int m,int s)
{
    node *temp=(node*)malloc(sizeof(node));
    if(current==NULL)
    temp->next=NULL;
    else
    temp->next=current;
    current=temp;
    temp->id=i;
    temp->maths=m;
    temp->science=s;
    printf("Successfully Inserted:\n");
}
void pop()
{
    if(current==NULL)
    printf("Stack is empty!\n");
    else
    {
        node* temp=current;
        current=current->next;
        free(temp);
    }
    printf("Successfully Popped!");
}
void display()
{
    node* temp=current;
    while(temp!=NULL)
    {
            printf("Id:%d\n",temp->id);
            printf("Maths:%d\n",temp->maths);
            printf("Science:%d\n",temp->science);
            temp=temp->next;
    }
}
int main() {
    push(1,100,100);
    push(2,100,100);
    push(3,100,99);
    push(4,99,100);
    push(5,100,99);
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
        push(id,maths,science);
        break;
        case 2:
        pop();
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