#include <stdio.h>
int main() {
    int a[5],b[5],count=0;
    for(int i=0;i<5;i++)
   {
       printf("Enter Number a[%d]:",i+1);
       scanf("%d",&a[i]);
   }
   for(int i=0;i<5;i++)
   {
       if(a[i]%2!=0)
       {
           b[count++]=a[i];
       }
   }
   for(int i=0;i<count;i++)
   printf("%d ",b[i]);
    return 0;
}
