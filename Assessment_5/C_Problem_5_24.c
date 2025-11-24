
#include <stdio.h>
#include<math.h>
int main() {
    int x,sum=0,n,dig=0;
    printf("Enter Number:");
    scanf("%d",&x);
    for(x;x>=10;x/=10)
    {
        dig=sqrt((x%100));
        if(dig*dig==(x%100))
        sum++;
    }
    printf("%d",sum);
}