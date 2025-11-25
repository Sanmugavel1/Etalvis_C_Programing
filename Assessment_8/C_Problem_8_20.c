#include <stdio.h>
#include<math.h>
int disp_count_HCF2(int,int);
int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d,%d",&x,&y);
    int a=disp_count_HCF2(x,y);
    printf("%d\n",a);
    return 0;
}
int disp_count_HCF2(int x,int y)
{
    int z=1;
    while(z!=0)
    {
        z=x%y;
        x=y;
        y=z;
    }
    return x;
}