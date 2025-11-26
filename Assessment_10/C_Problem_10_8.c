#include <stdio.h>
#include<stdlib.h>
int main() {
    char a[50];
    int i=0;
    printf("Enter String:");
    scanf("%50[^\n]",a);
    while(a[i]!='\0')
    {
        if(!(a[i]>='0'&&a[i]<='9'))
       { printf("Not Valid");
        return 0;}
        i++;
    }
    printf("Valid");
}