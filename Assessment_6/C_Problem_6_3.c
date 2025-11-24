#include <stdio.h>

int main() {
    int x=5,sum=0;
    while(x>=1)
    {
        sum+=x;
        x--;
    }
    printf("%d\n",sum);
}
