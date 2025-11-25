#include <stdio.h>
#include<math.h>
void disp_two_digit_square(int a)
{
    int count=0;
    while(a>=10)
    {
        int n=sqrt(a%100);
        if(n*n==(a%100))
        count++;
        a/=10;
    }
    printf("%d",count);
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    disp_two_digit_square(x);
    return 0;
}