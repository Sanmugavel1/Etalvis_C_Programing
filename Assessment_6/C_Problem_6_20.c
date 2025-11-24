#include <stdio.h>
#include<math.h>
int main() {
    int x,n,i=2,count=0;
    //printf("Enter Number:");
    //scanf("%d",&x);
    while(i<10)
    {
        int j=2;
        n=sqrt(i);
    while(j<=n)
    {
        if(i%j==0)
        {
           count++;
           break;
        }
        j++;
    }
    i++;
}
     printf("%d",count);
}
