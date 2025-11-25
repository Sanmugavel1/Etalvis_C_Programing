#include <stdio.h>
void disp_odd(void)
{
    for(int i=1;i<=10;i++)
        if(i%2!=0)
        printf("%d\n",i);
}
int main() {
    disp_odd();
    return 0;
}