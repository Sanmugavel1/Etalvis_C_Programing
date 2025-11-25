#include <stdio.h>
void disp_sum(void)
{
    int sum=0;
    for(int i=5;i>=1;i--)
    sum+=i;
    printf("%d\n",sum);
}
int main() {
    disp_sum();
    return 0;
}