#include <stdio.h>
#include<stdlib.h>
int main() {
    char a[100];
    int i=0;
    printf("Enter String:");
    scanf("%[^\n]",a);
    while(a[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
}