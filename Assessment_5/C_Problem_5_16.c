
#include <stdio.h>
#include<math.h>
int main() {
    int x,sum=0,n;
    printf("Enter Number:");
    scanf("%d",&x);
    n=sqrt(x);
    for(int i=2;i<=n;i++)
    {
        if(x%i==0)
          sum++;
    }
    if(sum==0)
    printf("Prime");
    else
    printf("Not Prime");
}