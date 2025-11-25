#include <stdio.h>
void disp_interchange_first_last_digit(int a)
{
    int dig,last=a%10,first,temp=a,count=1;
    while(temp>0)
    {
        count*=10;
        temp/=10;
    }
    count/=10;
    first=a/count;
    a=a-(first*count)-last;
    a=(last*count)+a+first;
    printf("%d",a);
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    disp_interchange_first_last_digit(x);
    return 0;
}