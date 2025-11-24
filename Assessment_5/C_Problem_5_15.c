
#include <stdio.h>

int main() {
    int x,sum=1,rev;
    printf("Enter Number:");
    scanf("%d",&x);
    rev=x;
    for(;rev>0;rev/=10)
    {
        sum*=10;
    }
    sum/=10;
    int last=x%10,first=x/sum;
     if(last%2!=0)
     {
         x=x-(first*sum);
         x=((first-1)*sum)+x;
     }
    printf("%d\n",x);

    return 0;
}