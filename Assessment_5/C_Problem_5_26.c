#include <stdio.h>
#include <math.h>

int main() {
    int x;
    for(int i=9999;i>=1000;i--)
    {
        if(i%7==0 && i%9==0)
       { x=i;
        break;
       }
    }

    printf("%d", x);

    return 0;
}
