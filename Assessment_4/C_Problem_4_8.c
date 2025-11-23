#include <stdio.h>
int main(){
      int x=10;
      loop:
      {
          int sum=(x/10)+(x%10);
          if(sum==6&&x%2==0)
          printf("%d\n",x);
      }
      x++;
      if(x<=99)
          goto loop;
      return 0;
}