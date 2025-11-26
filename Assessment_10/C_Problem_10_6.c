#include <stdio.h>
#include<stdlib.h>
int main() {
    int a,temp;
    printf("Enter Number:");
    scanf("%d",&a);
    temp=a;
    while(temp>0)
    {
        printf("%c\n",(temp%10));
        temp/=10;
    }
}