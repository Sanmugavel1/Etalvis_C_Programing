#include <stdio.h>
#include<math.h>
int single_digit_prime();
int main() {
    /*int x;
    printf("Enter Number:");
    scanf("%d",&x);*/
    int y=single_digit_prime();
    printf("%d\n",y);
    return 0;
}
int single_digit_prime()
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
    return count;
}