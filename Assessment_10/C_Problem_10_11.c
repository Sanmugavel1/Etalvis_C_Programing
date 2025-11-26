#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[50];
    int b[50];
    int i = 0;
    printf("Enter String: ");
    scanf("%50[^\n]", a);
    while(a[i]!='\0')
    {
        b[i]=a[i]-'0';
        i++;
    }
    for(int j=0;j<i;j++)
    {
        printf("%d\n",b[j]);
    }
    
}
