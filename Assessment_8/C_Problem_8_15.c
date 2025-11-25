#include <stdio.h>
#include<math.h>
int single_digit_prime(int);
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    int y=single_digit_prime(x);
    printf("%d\n",y);
    return 0;
}
int single_digit_prime(int a)
{
    int count=0;
    while(a>0)
    {
        int n=sqrt(a%10);
        int c=0;
    for(int j=2;j<=n;j++)
    {
        if ((a%10)%j==0)
        {
            c++;
            break;
        }
    }
    if(c==0&&(a%10)>1)
    count++;
    a/=10;
    }
    return count;
}