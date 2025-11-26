#include <stdio.h>
void memcomp(int*,int*,int);
int main() {
    int a[5]={1,2,3,4,5},b[5]={1,2,3,4,5};
    memcomp(a,b,5);
}
void memcomp(int *src,int *dest, int size)
{
    for(int i=0;i<size;i++)
    {
        if(*(dest+i)!=*(src+i))
       {
           printf("Failure");
           return;
       }
    }
    printf("Success");
}