#include <stdio.h>
int main(){
      int x=10;
      loop:
      {
          if(x%2!=0)
          printf("%d\n",x);
      }
      x++;
      if(x<=20)
          goto loop;
      return 0;
}