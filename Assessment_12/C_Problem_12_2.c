#include <stdio.h>
void find_position(char *,char*,int *,int*);
int main() {
    char a[50],tar;
    int pos[30],size=0;
    printf("Enter String:");
    scanf("%[^\n]",a);
    printf("Enter character:");
    scanf(" %c",&tar);
    find_position(a,&tar,pos,&size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",pos[i]);
    }
    return 0;
}
void find_position(char* src,char* tar,int *pos,int *size)
{
    int i=0;
    while(*(src+i)!='\0')
    {
        if(*(src+i)==*tar)
        {
            pos[*size] = i + 1;
            (*size)++;
        }
        i++;
    }
}