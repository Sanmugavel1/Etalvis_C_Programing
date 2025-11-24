#include <stdio.h>
#include<math.h>
int main() {
    int x,n,i=2;
    printf("Enter Number:");
    scanf("%d",&x);
    n=sqrt(x);
    while(i<=n)
    {
        if(x%i==0)
        {
            printf("Not Prime");
            return 0;
        }
        i++;
    }
    printf("Prime");
}
