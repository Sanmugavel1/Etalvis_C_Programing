#include <stdio.h>
#include<math.h>
void disp_biggest_4digit_div7_9()
{
    for(int i=9999;i>=1000;i--)
    {
        if(i%7==0&&i%9==0)
        {
            printf("%d",i);
            break;
        }
    }
}
int main() {
    /*int x;
    printf("Enter Number:");
    scanf("%d",&x);*/
    disp_biggest_4digit_div7_9();
    return 0;
}