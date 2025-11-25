#include <stdio.h>
void disp_sum_all_digits(int a)
{
    int sum=0;
    while(a>0)
    {
        sum+=(a%10);
        a/=10;
    }
    printf("%d",sum);
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    disp_sum_all_digits(x);
    return 0;
}