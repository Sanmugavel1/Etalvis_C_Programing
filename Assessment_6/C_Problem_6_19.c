#include <stdio.h>
#include<math.h>
int main() {
    int x,n,i=2;
    printf("Enter Number:");
    scanf("%d",&x);
    n=sqrt((x/10)%100);
    while(i<=n)
    {
        if(((x/10)%100)%i==0)
        {
            printf("Not Prime");
            return 0;
        }
        i++;
    }
    printf("Prime");
}
