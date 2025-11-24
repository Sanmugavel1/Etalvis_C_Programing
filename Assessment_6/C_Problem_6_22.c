#include <stdio.h>
#include<math.h>
int main() {
    int x,n,i=2,count=0;
    printf("Enter Number:");
    scanf("%d",&x);
    while(x>=10)
    {
        if((x%100)%2!=0)
        count++;
        x/=10;
    }
     printf("%d",count);
}
