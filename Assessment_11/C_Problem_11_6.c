#include <stdio.h>
void strcopy(char*,char*);
int main() {
    char a[5]="Hello",b[5];
    strcopy(a,b);
    printf("%s\n",b);
}
void strcopy(char *src,char *dest)
{
   int i=0;
   while(src[i]!='\0')
   {
       dest[i]=src[i];
       i++;
   }
   dest[i]='\0';
}