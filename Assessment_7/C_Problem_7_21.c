#include <stdio.h>
#include<math.h>
void disp_total_odd_digits(int a)
{
    int count=0;
    while(a>0)
    {
        if((a%10)%2!=0)
        count++;
        a/=10;
    }
    printf("%d",count);
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    disp_total_odd_digits(x);
    return 0;
}