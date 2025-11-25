#include <stdio.h>
#include<math.h>
int disp_LCM2(int,int);
int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d,%d",&x,&y);
    int a=disp_LCM2(x,y);
    printf("%d\n",a);
    return 0;
}
int disp_LCM2(int x,int y)
{
    int lcm=x>y?x:y;
    if(x==0||y==0)
    {
        return 0;
    }
    while(1)
    {
        if(lcm%x==0&&lcm%y==0)
        break;
        lcm++;
    }
    return lcm;
}