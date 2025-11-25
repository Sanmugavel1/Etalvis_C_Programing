#include <stdio.h>
int disp_reverse_number(int);
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    int y=disp_reverse_number(x);
    printf("%d\n",y);
    return 0;
}
int disp_reverse_number(int x)
{
    int dig,rev=0;
    while(x>0)
    {
        dig=(x%10);
        rev=(rev*10)+dig;
        x/=10;
    }
    return rev;
}