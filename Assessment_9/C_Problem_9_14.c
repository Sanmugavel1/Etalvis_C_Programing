#include <stdio.h>
#include <math.h>

int main() {
    int a[100], count = 0;

    while(1)
    {
        int b;
        printf("Enter number: ");
        scanf("%d", &b);

        if(b == 0)
            break;

        a[count++] = b;
    }

    if(count % 2 != 0)
        printf("%d", a[count/2]);
    else {
        int mid = count/2;
        printf("%d", a[mid-1] + a[mid]);
    }

    return 0;
}
