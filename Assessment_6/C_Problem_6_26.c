#include <stdio.h>
#include <math.h>

int main() {
    int x=9999, c = 0;
    //printf("Enter Number:");
    //scanf("%d", &x);
    while(x>=1000)
    {
        if(x%7==0&&x%9==0)
        break;
        x--;
    }
    printf("%d", x);
    return 0;
}
