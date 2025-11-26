#include <stdio.h>
void strcon(char*,char*,char*);
int main() {
    char a[]="hello",b[]="hello",c[50];
    strcon(a,b,c);
    printf("%s",c);
}
void strcon(char *src1,char *src2,char* dest)
{
    int i=0,j=0,count=0;
    while(src1[i]!='\0')
    {
        dest[count++]=src1[i];
       i++;
    }
    while(src2[j]!='\0')
    {
        dest[count++]=src2[j];
        j++;
    }
}