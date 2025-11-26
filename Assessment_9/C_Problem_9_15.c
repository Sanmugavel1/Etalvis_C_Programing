#include <stdio.h>

int main() {
    int a[100], b[100], count = 0, dcount = 0;

    while(1) {
        int x;
        printf("Enter number: ");
        scanf("%d", &x);
        if(x == 0)
            break;
        a[count++] = x;
    }

    for(int i = 0; i < count; i++) {
        int temp = a[i], sum = 0;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        b[dcount++] = sum;
    }

    for(int i = 0; i < dcount; i++) {
        for(int j = i + 1; j < dcount; j++) {
            if(b[i] > b[j]) {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }

    for(int i = 0; i < dcount; i++)
        printf("%d ", b[i]);

    return 0;
}
