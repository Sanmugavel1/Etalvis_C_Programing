
#include <stdio.h>
int main()
{
    int x;
    printf("Enter Number: ");
    scanf("%d", &x);
    int result = 1 + ((x - 1) % 9);
    printf("Result = %d", result);
}


