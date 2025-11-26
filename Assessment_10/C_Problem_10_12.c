#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[50];
    int b[50];
    int i=0;
    for(;;i++)
    {
        int c;
        printf("Enter Number(0 to stop):");
        scanf("%d",&c);
        if(c==0)
        break;
        b[i]=c;
    }
    for(int j=0;j<i;j++)
    {
        a[j]=b[j]+'0';
    }
    printf("%s",a);
}
