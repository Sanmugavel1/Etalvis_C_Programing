#include <stdio.h>
void intcon(int*,int,int*,int,int*);
int main() {
    int a[5]={1,2,3,4,5},b[5]={1,2,3,4,5},c[10];
    intcon(a,5,b,5,c);
    for(int i=0;i<10;i++)
    printf("%d\n",c[i]);
}
void intcon(int *src1,int size1,int* src2,int size2,int* dest)
{
    int count=0;
    for(int i=0;i<size1;i++)
    dest[count++]=src1[i];
    for(int i=0;i<size2;i++)
    dest[count++]=src2[i];
}