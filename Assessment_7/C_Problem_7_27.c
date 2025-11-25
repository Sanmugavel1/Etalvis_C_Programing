#include <stdio.h>
#include<math.h>
void disp_count_sum14()
{
    int count=0;
    for(int i=100000;i>=10;i--)
    {
        int c=0,temp=i;
        while(temp>0)
        {
            c+=(temp%10);
            temp/=10;
        }
        if(c==14)
        count++;
    }
    printf("%d",count);
}
int main() {
    /*int x;
    printf("Enter Number:");
    scanf("%d",&x);*/
    disp_count_sum14();
    return 0;
}