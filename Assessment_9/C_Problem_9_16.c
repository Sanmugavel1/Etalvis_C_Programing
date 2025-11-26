#include <stdio.h>

int main() {
    int a[50], b[50], res[51];
    int n1, n2, i, carry = 0;

    printf("Enter number of digits for first number: ");
    scanf("%d", &n1);
    printf("Enter %d digits: ", n1);
    for(i = 50 - n1; i < 50; i++) scanf("%d", &a[i]);
    for(i = 0; i < 50 - n1; i++) a[i] = 0;

    printf("Enter number of digits for second number: ");
    scanf("%d", &n2);
    printf("Enter %d digits: ", n2);
    for(i = 50 - n2; i < 50; i++) scanf("%d", &b[i]);
    for(i = 0; i < 50 - n2; i++) b[i] = 0;

    for(i = 50; i > 0; i--) {
        int s = a[i-1] + b[i-1] + carry;
        res[i] = s % 10;
        carry = s / 10;
    }
    res[0] = carry;

    for(i = 0; i < 51; i++) printf("%d", res[i]);

    return 0;
}
