#include <stdio.h>
#include <math.h>

int main() {
    int x, dig, count = 0, sum;

    printf("Enter Number: ");
    scanf("%d", &x);

    for(; x > 0; x /= 10) {
        dig = x % 10;
        if(dig > 1) {
            sum = 0;
            for(int i = 2; i <= sqrt(dig); i++) {
                if(dig % i == 0)
                    sum++;
            }
            if(sum == 0)
                count++;
        }
    }

    printf("%d", count);

    return 0;
}
