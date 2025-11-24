// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x=11,sum=0;
    for(x;x<=99;x++)
    {
        if(x%2!=0&&((x/10)+(x%10))==7)
        printf("%d\n",x);
    }
    

    return 0;
}