#include <stdio.h>
#include <math.h>

int main() {
    int x,y,z,lcm;
    printf("Enter Number:");
    scanf("%d,%d,%d", &x,&y,&z);
        if(x == 0 || y == 0|| z==0) {
        printf("0");
        return 0;
    }

    if(x>y&&x>z) lcm=x;
    else if(y>x&&y>z) lcm=y;
    else lcm=z;
    while(1)
    {
        if(lcm%x==0&&lcm%y==0&&lcm%z==0)
        break;
        lcm++;
    }
    printf("%d",lcm);
    return 0;
}
