#include <stdio.h>
int main(){
    int x, first, last, temp, pow10 = 1;
    printf("Enter number:");
    scanf("%d", &x);
    last = x % 10;
    temp = x;
loop:
    temp /= 10;
    pow10 *= 10;
    if(temp > 9) goto loop;
    first = temp;
    int middle = (x % pow10) / 10;
    int result = (last * pow10) + (middle * 10) + first;
    printf("%d", result);
    return 0;
}