#include <stdio.h>
int count_total_digits(int);
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    int y=count_total_digits(x);
    printf("%d\n",y);
    return 0;
}
int count_total_digits(int x)
{
    int sum=0;
    while(x>0)
    {
        sum++;
        x/=10;
    }
    return sum;
}