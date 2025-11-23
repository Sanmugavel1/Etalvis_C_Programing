
#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    ((x/10)>=(x%10))?printf("Success"):printf("Failure");
    return 0;
}
