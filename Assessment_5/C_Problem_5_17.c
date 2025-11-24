
#include <stdio.h>
#include<math.h>
int main() {
    int x,sum=0,n,dig=0;
    printf("Enter Number:");
    scanf("%d",&x);
    n=sqrt(x);
    for(int i=2;i<=n;i++)
    {
        if(x%i==0)
          sum++;
    }
    for(x;x>0;x/=10)
    dig+=(x%10);
    if(sum==0&&dig==14)
    printf("Prime and Sum of digits is 14");
    else if(sum==0&&dig!=14)
    printf("Prime and Sum of digits is not 14");
    else if(sum!=0&&dig==14)
    printf("Not Prime and Sum of digits is 14");
    else
    printf("Not Prime and Sum of digits is not 14");
}