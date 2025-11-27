#include <stdio.h>
void getnumber(int*,int*);
void addnumbers(int*,int*,int*);
int main() {
    int number1[50],number2[50],result[50];
    getnumber(number1,number2);
    addnumbers(number1,number2,result);
    int i=0;
    while(result[i]==0)
    {
        i++;
    }
    for(i;i<50;i++)
    {
        printf("%d",result[i]);
    }
    return 0;
}
void getnumber(int* a,int* b)
{
    char temp1[51],temp2[51];
    int len1=0,len2=0;
    printf("Enter Number1:");
    scanf("%s",temp1);
    printf("Enter Number2:");
    scanf("%s",temp2);
    while(temp1[len1]!='\0')
    len1++;
    while(temp2[len2]!='\0')
    len2++;
    for(int i=0;i<len1;i++)
    *(a+(50-len1+i))=temp1[i]-'0';
    for(int i=0;i<(50-len1);i++)
    *(a+i)=0;
    for(int i=0;i<len2;i++)
    *(b+(50-len2+i))=temp2[i]-'0';
    for(int i=0;i<(50-len2);i++)
    *(b+i)=0;
}
void addnumbers(int *a,int *b,int *c)
{
    int carry=0;
    for(int i=49;i>=0;i--)
    {
      int temp=*(a+i)+ *(b+i) + carry;
      *(c+i)=temp%10;
      carry=temp/10;
    }
}