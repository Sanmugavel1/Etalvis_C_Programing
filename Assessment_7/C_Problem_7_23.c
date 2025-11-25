#include <stdio.h>
#include<math.h>
void disp_single_digit_square(int a)
{
    int count=0;
    while(a>0)
    {
        int n=sqrt(a%10);
        if(n*n==(a%10))
        count++;
        a/=10;
    }
    printf("%d",count);
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    disp_single_digit_square(x);
    return 0;
}