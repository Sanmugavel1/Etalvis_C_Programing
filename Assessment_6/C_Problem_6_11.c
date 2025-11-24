#include <stdio.h>

int main() {
    int x,sum=0;
    printf("Enter Number:");
    scanf("%d",&x);
    while(x>0)
    {
        sum++;
        x/=10;
    }
    printf("%d\n",sum);
}
