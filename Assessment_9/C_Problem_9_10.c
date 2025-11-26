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
       int c=0,n=sqrt(a[i]);
       for(int j=2;j<=n;j++)
       {
           if(a[i]%j==0)
           c++;
       }
       if(c!=0||a[i]<2)
       {
           b[count]=a[i];
           count++;
       }
   }
   for(int i=0;i<count;i++)
   printf("%d ",b[i]);
    return 0;
}