#include <stdio.h>
#include<math.h>
void disp_count_HCF2(int x,int y)
{
    int z=1;
    while(z!=0)
    {
        z=x%y;
        x=y;
        y=z;
    }
    printf("%d",x);
}
int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d,%d",&x,&y);
    disp_count_HCF2(x,y);
    return 0;
}