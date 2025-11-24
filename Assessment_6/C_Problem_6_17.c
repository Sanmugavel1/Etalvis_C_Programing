#include <stdio.h>
#include<math.h>
int main() {
    int x,n,i=2,count=0;
    printf("Enter Number:");
    scanf("%d",&x);
    n=sqrt(x);
    while(i<=n)
    {
        if(x%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==0&&((x/10)+(x%10))==14)
    printf("Prime and Sum of digits is 14");
    else if(count==0&&((x/10)+(x%10))!=14)
    printf("Prime and Sum of digits is not 14");
     else if(count!=0&&((x/10)+(x%10))==14)
     printf("Not Prime and Sum of digits is 14");
     else
     printf("Not Prime and Sum of digits is not 14");
}
