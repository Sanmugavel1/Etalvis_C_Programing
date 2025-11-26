#include <stdio.h>

int main() {
    int a[5];
    for(int i=0;i<5;i++)
   {
       printf("Enter Number a[%d]:",i+1);
       scanf("%d",&a[i]);
   }
   for(int i=0;i<5;i++)
   {
       for(int j=i+1;j<5;j++)
       {
           if(a[i]>a[j])
           {
               int temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   for(int i=0;i<5;i++)
   printf("%d ",a[i]);
    return 0;
}