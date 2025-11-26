// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[5]={1,23,31,4,11};
    printf("Before Carry...\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]>=10)
        {
            a[i+1]+=(a[i]/10);
            a[i]%=10;
        }
    }
    printf("\nAfter Carry...\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}