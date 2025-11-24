#include <stdio.h>
#include <math.h>

int main() {
    int x=100000, c = 0;
    //printf("Enter Number:");
    //scanf("%d", &x);
    while(x>=10)
    {
        int count=0;
        int temp=x;
        while(temp>0)
        {
            count+=(temp%10);
            temp/=10;
        }
        if(count==14)
        c++;
        x--;
    }
    printf("%d", c);
    return 0;
}
