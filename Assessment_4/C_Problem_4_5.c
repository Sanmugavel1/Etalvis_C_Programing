#include <stdio.h>
int main(){
      int x=1;
      loop:
      {
          if(x%2!=0)
          printf("%d\n",x);
      }
      x++;
      if(x<=9)
          goto loop;
      return 0;
}
