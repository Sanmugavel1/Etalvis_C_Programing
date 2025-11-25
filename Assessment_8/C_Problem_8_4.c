#include <stdio.h>
int disp_2digit_odd_sum_tems7(void);
int main() {
    int y=disp_2digit_odd_sum_tems7();
    printf("%d\n",y);
    return 0;
}
int disp_2digit_odd_sum_tems7(void)
{
    int sum=0;
    for(int i=99;i>=10;i--)
    if((i/10)%10==7&&i%2!=0)
    sum+=i;
    return sum;
}