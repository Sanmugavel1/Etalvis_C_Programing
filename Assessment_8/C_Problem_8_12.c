#include <stdio.h>
#include<math.h>
int disp_total_2digit_odd(int);
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    int y=disp_total_2digit_odd(x);
    printf("%d\n",y);
    return 0;
}
int disp_total_2digit_odd(int a)
{
    int count=0;
    while(a>=10)
    {
        if((a%100)%2!=0)
        count++;
        a/=10;
    }
    return count;
}