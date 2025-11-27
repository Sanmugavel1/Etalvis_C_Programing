#include <stdio.h>
void find_position(char *,char*,int *);
int main() {
    char a[50],tar[50];
    int pos;
    printf("Enter Main String:");
    scanf("%[^\n]",a);
    printf("Enter Sub String:");
    scanf(" %[^\n]",tar);
    find_position(a,tar,&pos);
    printf("%d ",pos+1);
    return 0;
}
void find_position(char* src,char* tar,int *pos)
{
    int i=0,j=0,count1=0,count2=0;
    while(tar[count1]!='\0')
    count1++;
    while(src[count2]!='\0')
    count2++;
    while(src[i]!='\0')
    {
        if(src[i]==tar[j]&&(count2-i)>=count1)
        {
            while(tar[j]==src[i])
            {
                j++;
                i++;
            }
        }
        if(j==count1)
        break;
        else j=0;
        i++;
    }
    *pos=i-j;
}