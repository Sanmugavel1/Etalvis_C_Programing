#include <stdio.h>
#include<math.h>
int main() {
    int a[5],b[5],count=0;
    for(int i=0;i<5;i++)
   {
       printf("Enter Number a[%d]:",i+1);
       scanf("%d",&a[i]);
   }
   for(int i=0;i<5;i++)
   {
       int temp=a[i],dig,rev=0;
       while(temp>0)
       {
           dig=temp%10;
           rev=(rev*10)+dig;
           temp/=10;
       }
       b[count++]=rev;
   }
   for(int i=0;i<count;i++)
   printf("%d ",b[i]);
    return 0;
}