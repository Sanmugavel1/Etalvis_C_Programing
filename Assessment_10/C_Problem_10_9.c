#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[51];
    int i = 0;

    printf("Enter String: ");
    scanf("%50[^\n]", a);

    while (a[0] == '0' && a[1] != '\0') {
        int j = 0;
        while (a[j] != '\0') {
            a[j] = a[j + 1];
            j++;
        }
    }

    printf("%s\n", a);
    return 0;
}
