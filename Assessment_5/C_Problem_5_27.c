#include <stdio.h>
#include <math.h>

int main() {
    int x=0;
    for(int i=100000;i>=10;i--)
    {
        int temp=i,sum=0;
        for(;temp>0;temp/=10)
        sum+=temp%10;
        if(sum==14)
        x++;
    }

    printf("%d", x);

    return 0;
}
