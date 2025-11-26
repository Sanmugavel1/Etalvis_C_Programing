
#include <stdio.h>

int main() {
    char a[50];
    printf("Enter String:");
    scanf("%[^\n]",a);
    printf("%s",a);
}