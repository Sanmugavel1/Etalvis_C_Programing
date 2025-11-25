#include <stdio.h>
#include<math.h>
void check_prime_and_sum14(int a)
{
    int n=sqrt(a),count=0;
    for(int i=2;i<=n;i++)
    {
        if (a%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0&&((a/10)+(a%10))==14)
    printf("Prime and Sum is 14");
    else if(count==0&&((a/10)+(a%10))!=14)
    printf("Prime and Sum is not 14");
    else if(count!=0&&((a/10)+(a%10))==14)
    printf("Not Prime and Sum is 14");
    else
    printf("Not Prime and Sum is not 14");
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    check_prime_and_sum14(x);
    return 0;
}