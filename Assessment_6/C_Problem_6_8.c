#include <stdio.h>

int main() {
    int x=11,sum=0;
    while(x<=99)
    {
        if(x%2==0&&((x/10)+(x%10))==6)
        printf("%d\n",x);
        x++;
    }

}
