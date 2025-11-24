#include <stdio.h>
#include <math.h>

int main() {
    int x,y,lcm;
    printf("Enter Number:");
    scanf("%d,%d", &x,&y);
        if(x == 0 || y == 0) {
        printf("0");
        return 0;
    }

    lcm=x>y?x:y;
    while(1)
    {
        if(lcm%x==0&&lcm%y==0)
        break;
        lcm++;
    }
    printf("%d",lcm);
    return 0;
}
