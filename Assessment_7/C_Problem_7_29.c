#include <stdio.h>
#include<math.h>
void disp_LCM3(int x,int y,int z)
{
    int lcm;
    if(x>y&&x>z)lcm=x;
    else if(y>x&&y>z)lcm=y;
    else lcm=z;
    if(x==0||y==0||z==0)
    {
        printf("0");
        return;
    }
    while(1)
    {
        if(lcm%x==0&&lcm%y==0&&lcm%z==0)
        break;
        lcm++;
    }
    printf("%d",lcm);
}
int main() {
    int x,y,z;
    printf("Enter Number:");
    scanf("%d,%d,%d",&x,&y,&z);
    disp_LCM3(x,y,z);
    return 0;
}