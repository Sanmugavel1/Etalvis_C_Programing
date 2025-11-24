
#include <stdio.h>

int main() {
    int x,sum=0;
    printf("Enter Number:");
    scanf("%d",&x);
    for(x;x>0;x/=10)
    {
        sum++;
    }
    printf("%d\n",sum);

    return 0;
}