#include <stdio.h>

int main() {
    int x=11,sum=0;
    while(x<=99)
    {
        if((x/10)%10==7&&x%2!=0)
        sum+=x;
        x++;
    }
    printf("%d\n",sum);
}
