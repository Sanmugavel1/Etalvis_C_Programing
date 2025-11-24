#include <stdio.h>

int main() {
    int x,dig=0,count=1,last,first,temp;
    printf("Enter Number:");
    scanf("%d",&x);
    temp=x;
    last=x%10;
    while(temp>0)
    {
        count*=10;
        temp/=10;
    }
    count/=10;
    first=(x/count);
    x=x-(first*count)-last;
    x=(last*count)+x+first;
    printf("%d\n",x);
}
