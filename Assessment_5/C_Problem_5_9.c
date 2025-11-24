
#include <stdio.h>

int main() {
    int x=11,sum=0;
    for(x;x<=99;x++)
    {
        if(x%10==5)
        sum+=x;
    }
    printf("%d\n",sum);

    return 0;
}