#include <stdio.h>

int main() {
    int x, y, lcm;
    scanf("%d %d", &x, &y);

    if(x == 0 || y == 0) {
        printf("0");
        return 0;
    }

    lcm = (x > y) ? x : y;

    for(; ; lcm++) {
        if(lcm % x == 0 && lcm % y == 0)
            break;
    }

    printf("%d", lcm);
    return 0;
}
