#include <stdio.h>
#include<stdlib.h>
int main() {
    int a;
    char b[100];
    printf("Enter Number:");
    scanf("%d",&a);
    sprintf(b,"%d",a);
    printf("%s",b);
}