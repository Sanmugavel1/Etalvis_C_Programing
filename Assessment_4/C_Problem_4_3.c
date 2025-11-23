
#include <stdio.h>
int main(){
      int x=5,sum=0;
      loop:
          sum+=x;
      x--;
      if(x>=1)
          goto loop;
      printf("%d",sum);
      return 0;
}

