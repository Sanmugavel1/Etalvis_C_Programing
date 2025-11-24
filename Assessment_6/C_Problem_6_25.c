#include <stdio.h>
#include <math.h>

int main() {
    int x, c = 0;
    printf("Enter Number:");
    scanf("%d", &x);

    while (x > 0) {
        int n = sqrt(x % 10), count = 0;
        int i = (x % 10), j = 2;

        if (i > 1) {
            while (j <= n) {
                if (i % j == 0) {
                    count++;
                }
                j++;
            }
        }

        if (count == 0&&i!=1)
            c++;

        x /= 10;
    }

    printf("%d", c);
    return 0;
}
