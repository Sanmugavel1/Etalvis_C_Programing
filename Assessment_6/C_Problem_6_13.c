#include <stdio.h>

int main() {
    int x,dig=0,rev=0;
    printf("Enter Number:");
    scanf("%d",&x);
    while(x>0)
    {
        dig=(x%10);
        rev=(rev*10)+dig;
        x/=10;
    }
    printf("%d\n",rev);
}
