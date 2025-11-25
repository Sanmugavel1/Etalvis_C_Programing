#include <stdio.h>
#include<math.h>
void disp_total_2digits_odd(int a)
{
    int count=0;
    while(a>=10)
    {
        if((a%100)%2!=0)
        count++;
        a/=10;
    }
    printf("%d",count);
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    disp_total_2digits_odd(x);
    return 0;
}