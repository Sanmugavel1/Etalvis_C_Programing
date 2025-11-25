#include <stdio.h>
#include<math.h>
void disp_two_digit_square(int a)
{
    int c=0;
    while(a>0)
    {
        int n=sqrt(a%10),count=0;
        for(int i=2;i<=n;i++)
        {
            if((a%10)%i==0)
            count++;
        }
        if(count==0)
        c++;
        a/=10;
    }
    printf("%d",c);
}
int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    disp_two_digit_square(x);
    return 0;
}