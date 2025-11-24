#include <stdio.h>

int main() {
    int x,y,z=4;;
    printf("Enter Two Numbers:");
    scanf("%d %d", &x, &y);
    if(x<y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    for(;z!=0;)
    {
        z=x%y;
        x=y;
        y=z;
    }
    printf("%d",x);

    
}
