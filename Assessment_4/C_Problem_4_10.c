#include <stdio.h>
int main(){
      int x=10,sum=0;
      loop:
      {
          if(x/10==7&&x&2!=0)
          {
             sum+=x;
          }
      }
      x++;
      if(x<=99)
          goto loop;
      printf("%d",sum);
      return 0;
}