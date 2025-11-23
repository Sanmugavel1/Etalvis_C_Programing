#include <stdio.h>
int main(){
      int x,rev=0,digit;
      printf("Enter number:");
      scanf("%d",&x);
      loop:
      {
          digit=x%10;
          rev=(rev*10)+digit;
          x/=10;
      }
      if(x>0)
          goto loop;
      printf("%d",rev);
      return 0;
}