#include <stdio.h>
#include<math.h>
int disp_single_digit_square(int);
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    int y=disp_single_digit_square(x);
    printf("%d\n",y);
    return 0;
}
int disp_single_digit_square(int a)
{
    int count=0;
    while(a>0)
    {
        int n=sqrt(a%10);
        if(n*n==(a%10))
        count++;
        a/=10;
    }
    return count;
}