#include <stdio.h>
int disp_2digits_ones5(void);
int main() {
    int y=disp_2digits_ones5();
    printf("%d\n",y);
    return 0;
}
int disp_2digits_ones5(void)
{
    int sum=0;
    for(int i=99;i>=10;i--)
    if(i%10==5)
    sum+=i;
    return sum;
}