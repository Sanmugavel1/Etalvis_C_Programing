#include <stdio.h>
#include<math.h>
int main() {
    int a[100],count=0,sum=0;
    while(1)
    {
        printf("Enter number:");
        scanf("%d",&a[count++]);
        sum+=a[count-1];
        if(a[count-1]==0)
        break;
    }
    printf("Count=%d\nSum=%d",count-1,sum);

}