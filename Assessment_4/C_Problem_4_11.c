#include <stdio.h>
int main(){
      int x,sum=0;
      printf("Enter number:");
      scanf("%d",&x);
      loop:
      {
          sum+=1;
          x/=10;
      }
      if(x>0)
          goto loop;
      printf("%d",sum);
      return 0;
}