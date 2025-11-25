#include <stdio.h>
#include<math.h>
int biggest_4div7_9();
int main() {
    /*int x;
    printf("Enter Number:");
    scanf("%d",&x);*/
    int y=biggest_4div7_9();
    printf("%d\n",y);
    return 0;
}
int biggest_4div7_9()
{
    for(int i=9999;i>=1000;i--)
    if(i%7==0&&i%9==0)
    return i;
}