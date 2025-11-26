#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,*ptr;
    ptr=&a;
    printf("Enter Number:");
    scanf("%d",ptr);
    printf("Before changing:%d\n",a);
    *ptr=5;
    printf("After Changing:%d",a);
}
