#include <stdio.h>
#include<math.h>
int main() {
    int x,count=0;
    printf("Enter Number:");
    scanf("%d",&x);
    while(x>=10)
    {
        int temp=(x%100);
        int n=sqrt(temp);
        if(n*n==temp)
        count++;
        x/=10;
    }
    printf("%d",count);
    return 0;
}