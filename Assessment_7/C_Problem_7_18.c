#include <stdio.h>
#include<math.h>
void check_first_2digits_prime(int a)
{
    int n=sqrt(a%100);
    for(int i=2;i<=n;i++)
    {
        if ((a%100)%i==0)
        {
            printf("Not Prime");
            return;
        }
    }
    printf("Prime");
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    check_first_2digits_prime(x);
    return 0;
}