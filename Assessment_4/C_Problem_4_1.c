#include <stdio.h>
int main(){
      int x=1;
      loop:
          printf("%d\n",x);
      x++;
      if(x<=5)
          goto loop;
      return 0;
}
