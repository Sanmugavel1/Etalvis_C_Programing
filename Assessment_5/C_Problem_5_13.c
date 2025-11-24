
#include <stdio.h>

int main() {
    int x,sum=0,rev=0;
    printf("Enter Number:");
    scanf("%d",&x);
    for(x;x>0;x/=10)
    {
        sum=(x%10);
        rev=(rev*10)+sum;
    }
    printf("%d\n",rev);

    return 0;
}