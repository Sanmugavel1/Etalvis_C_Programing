#include <stdio.h>
void memcopy(int*,int*,int);
int main() {
    int a[5]={1,2,3,4,5},b[5];
    memcopy(a,b,5);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }
}
void memcopy(int *src,int *dest, int size)
{
    for(int i=0;i<size;i++)
    {
        *(dest+i)=*(src+i);
    }
}