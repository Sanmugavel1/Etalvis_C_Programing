#include <stdio.h>
int disp_sum(void);
int main() {
    int y=disp_sum();
    printf("%d\n",y);
    return 0;
}
int disp_sum(void)
{
    int sum=0;
    for(int i=5;i>=1;i--)
    sum+=i;
    return sum;
}