#include <stdio.h>
#include<math.h>
int main() {
    int x,i=2,m=0;
    printf("Enter Number:");
    scanf("%d",&x);
    int n=sqrt(x);
    loop:
    {
        if(x%i==0)
          m+=1;
          i++;
    }
    if(i<=n)
    goto loop;
    if(m==0)
    printf("Prime");
    else
    printf("Not Prime");

    return 0;
}