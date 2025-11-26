#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[51];
    int i = 0;
    printf("Enter String: ");
    scanf("%50[^\n]", a);
    while(a[i]!='\0')
    {
        i++;
    }
    for(int j=0;j<i/2;j++)
    {
        char temp=a[j];
        a[j]=a[i-j-1];
        a[i-j-1]=temp;
    }
    printf("%s",a);
}
