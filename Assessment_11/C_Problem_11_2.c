#include <stdio.h>
void increement(int*);
int main() {
    int a[5]={1,2,3,4,5};
    increement(a);
    for(int i=0;i<5;i++)
    printf("%d\n",a[i]);
}
void increement(int *ptr)
{
    for(int i=0;i<5;i++)
    (*(ptr+i))++;
}