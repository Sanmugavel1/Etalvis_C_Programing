#include <stdio.h>
void count_total_digits(int a)
{
    int sum=0;
    while(a>0)
    {
        sum++;
        a/=10;
    }
    printf("%d",sum);
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    count_total_digits(x);
    return 0;
}