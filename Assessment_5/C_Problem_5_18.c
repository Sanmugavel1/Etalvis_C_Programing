
#include <stdio.h>
#include<math.h>
int main() {
    int x,sum=0,n,dig=0;
    printf("Enter Number:");
    scanf("%d",&x);
    dig=x%100;
    n=sqrt(dig);
    for(int i=2;i<=n;i++)
    {
        if(dig%i==0)
          sum++;
    }
    if(sum==0)
    printf("Prime");
    else
    printf("Not Prime");
}