#include <stdio.h>
#include<math.h>
int disp_total_odd_digits(int);
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    int y=disp_total_odd_digits(x);
    printf("%d\n",y);
    return 0;
}
int disp_total_odd_digits(int a)
{
    int count=0;
    while(a>0)
    {
        if((a%10)%2!=0)
        count++;
        a/=10;
    }
    return count;
}