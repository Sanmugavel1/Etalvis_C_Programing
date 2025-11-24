#include <stdio.h>

int main() {
    int i, j, count = 0, isPrime;

    for(i = 1; i <= 9; i++) {
        if(i == 1)
            continue;

        isPrime = 1;

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
            count++;
    }

    printf("%d", count);

    return 0;
}
