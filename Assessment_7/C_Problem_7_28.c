#include <stdio.h>
#include<math.h>
void disp_LCM2(int x,int y)
{
    int lcm=x>y?x:y;
    if(x==0||y==0)
    {
        printf("0");
        return;
    }
    while(1)
    {
        if(lcm%x==0&&lcm%y==0)
        break;
        lcm++;
    }
    printf("%d",lcm);
}
int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d,%d",&x,&y);
    disp_LCM2(x,y);
    return 0;
}