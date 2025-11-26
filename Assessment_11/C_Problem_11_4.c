#include <stdio.h>
void find_2digit_odd_sum7(int*,int*);
int main() {
    int a[5],count=0;
    find_2digit_odd_sum7(a,&count);
    for(int i=0;i<count;i++)
    printf("%d\n",a[i]);
}
void find_2digit_odd_sum7(int *ptr,int* count)
{
    for(int i=10;i<=99;i++)
    {
        if(((i%10)+(i/10))==7&&i%2!=0)
        {
            *(ptr+ *count)=i;
            (*count)++;
        }
    }
}