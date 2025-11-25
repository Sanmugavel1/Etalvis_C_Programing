#include <stdio.h>
#include<math.h>
int disp_LCM3(int,int,int);
int main() {
    int x,y,z;
    printf("Enter Number:");
    scanf("%d,%d,%d",&x,&y,&z);
    int a=disp_LCM3(x,y,z);
    printf("%d\n",a);
    return 0;
}
int disp_LCM3(int x,int y,int z)
{
    int lcm;
    if(x>y&&x>z) lcm=x;
    else if(y>z&&y>x) lcm=y;
    else lcm=z;
    if(x==0||y==0||z==0)
    {
        return 0;
    }
    while(1)
    {
        if(lcm%x==0&&lcm%y==0&&lcm%z==0)
        break;
        lcm++;
    }
    return lcm;
}