#include <stdio.h>
int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    ((x/100)==(x%100))?printf("Success"):printf("Failure");
    return 0;
}