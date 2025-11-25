#include <stdio.h>
void check_last_digit_odd(int a)
{
    int dig,last=a%10,first;
    if(last%2!=0)
    {
        int temp=a,count=1;
        while(temp>0)
    {
        count*=10;
        temp/=10;
    }
    count/=10;
    first=a/count;
    a=a-(first*count);
    a=((first-1)*count)+a;
    }
    printf("%d",a);
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    check_last_digit_odd(x);
    return 0;
}