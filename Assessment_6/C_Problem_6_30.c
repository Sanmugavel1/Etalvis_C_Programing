#include <stdio.h>
#include <math.h>

int main() {
    int x,y,c,lcm;
    printf("Enter Number:");
    scanf("%d,%d", &x,&y);
    if(x<y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    while(c!=0)
    {
        c=x%y;
        x=y;
        y=c;
    }
    printf("%d",x);
}
