
#include <stdio.h>
#include<math.h>
int main() {
    int x,sum=0,n,dig=0;
    printf("Enter Number:");
    scanf("%d",&x);
    for(x;x>0;x/=10)
    {
        dig=sqrt((x%10));
        if(dig*dig==(x%10))
        sum++;
    }
    printf("%d",sum);
}