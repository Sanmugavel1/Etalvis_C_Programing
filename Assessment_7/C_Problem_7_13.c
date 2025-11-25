#include <stdio.h>
void disp_reverse_number(int a)
{
    int dig,rev=0;
    while(a>0)
    {
        dig=(a%10);
        rev=(rev*10)+dig;
        a/=10;
    }
    printf("%d",rev);
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    disp_reverse_number(x);
    return 0;
}