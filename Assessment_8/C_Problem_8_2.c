#include <stdio.h>
int disp_rsum(void);
int main() {
    int y=disp_rsum();
    printf("%d\n",y);
    return 0;
}
int disp_rsum(void)
{
    int sum=0;
    for(int i=6;i>=1;i--)
    sum+=i;
    return sum;
}