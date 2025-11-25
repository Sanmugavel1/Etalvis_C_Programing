#include <stdio.h>
#include<math.h>
int disp_count_sum14();
int main() {
    /*int x;
    printf("Enter Number:");
    scanf("%d",&x);*/
    int y=disp_count_sum14();
    printf("%d\n",y);
    return 0;
}
int disp_count_sum14()
{
    int count=0;
    for(int i=100000;i>=10;i--)
    {
       int temp=i,sum=0; 
       while(temp>0)
       {
           sum+=(temp%10);
           temp/=10;
       }
       if(sum==14)
       count++;
    }
    return count;
}