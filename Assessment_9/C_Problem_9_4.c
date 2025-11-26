#include <stdio.h>

int main() {
    int a[5],sum=0;
    for(int i=0;i<5;i++)
   {
       printf("Enter Number a[%d]:",i+1);
       scanf("%d",&a[i]);
       sum+=a[i];
   }
   int big=a[0];
   for(int i=1;i<5;i++)
   {
       if(a[i]>big)
       big=a[i];
   }
   printf("%d",big);
    return 0;
}