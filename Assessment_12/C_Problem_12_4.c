#include <stdio.h>
void count_words(char *,int *);
int main() {
    char a[50];
    int words=0;
    printf("Enter Main String:");
    scanf("%[^\n]",a);
    count_words(a,&words);
    printf("%d",words);
    return 0;
}
void count_words(char* src,int *pos)
{
    int i=0;
    
    while (src[i] == ' ')
        i++;
    while(src[i]!='\0')
    {
        if(src[i]==' '&&src[i-1]!=' ')
        (*pos)++;
        i++;
    }
    if (i > 0 && src[i-1] != ' ')
        (*pos)++;
}