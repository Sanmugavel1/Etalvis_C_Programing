#include <stdio.h>
int sum_all_digits(int);
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    int y=sum_all_digits(x);
    printf("%d\n",y);
    return 0;
}
int sum_all_digits(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=(x%10);
        x/=10;
    }
    return sum;
}