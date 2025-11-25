#include <stdio.h>
#include<math.h>
void single_digit_prime()
{
    int count=0;
    for(int i=2;i<=9;i++)
    {
        int n=sqrt(i);
    for(int j=2;j<=n;j++)
    {
        if (i%j==0)
        {
            count++;
            break;
        }
    }
    }
    printf("%d",count);
}
int main() {
    /*int x;
    printf("Enter Number:");
    scanf("%d",&x);*/
    single_digit_prime();
    return 0;
}