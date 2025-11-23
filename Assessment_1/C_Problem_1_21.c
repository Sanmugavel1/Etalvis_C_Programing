#include <stdio.h>
int main() 
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=((x%10)%2!=0&&((x/100)%10)%2!=0)?x-5:x;
    printf("Result= %d",y);
}