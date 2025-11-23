#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=(((x/10)%10)==(x%10))?1:0;
    printf("Result=%d",y);
    return 0;
}
