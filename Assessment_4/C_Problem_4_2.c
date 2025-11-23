
#include <stdio.h>
int main(){
      int x=5;
      loop:
          printf("%d\n",x);
      x--;
      if(x>=1)
          goto loop;
      return 0;
}