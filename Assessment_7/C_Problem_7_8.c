#include <stdio.h>
void disp_2digit_even_sum6(void)
{
    for(int i=10;i<=99;i++)
        if(i%2==0&&((i/10)+(i%10))==6)
        printf("%d\n",i);
}
int main() {
    disp_2digit_even_sum6();
    return 0;
}