#include <stdio.h>
#include<math.h>
void check_prime(int a)
{
    int n=sqrt(a);
    for(int i=2;i<=n;i++)
    {
        if (a%i==0)
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
    check_prime(x);
    return 0;
}