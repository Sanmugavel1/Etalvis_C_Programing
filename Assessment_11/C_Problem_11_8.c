#include <stdio.h>
void strcomp(char*,char*);
int main() {
    char a[]="hello",b[]="hello";
    strcomp(a,b);
}
void strcomp(char *src,char *dest)
{
    int i=0;
    while(src[i]!='\0')
    {
        if(*(dest+i)!=*(src+i))
       {
           printf("Failure");
           return;
       }
       i++;
    }
    printf("Success");
}