
#include <stdio.h>
int main() 
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=(((x/10)%10)%2==0)?x:x-5;
    printf("Result= %d",y);
}