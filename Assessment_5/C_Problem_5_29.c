#include <stdio.h>

int main() {
    int x, y,z, lcm;
    scanf("%d %d %d", &x, &y, &z);

    if(x == 0 || y == 0|| z==0) {
        printf("0");
        return 0;
    }
      lcm = x;
      if(y > lcm) 
      lcm = y;
      if(z > lcm) 
      lcm = z;


    for(; ; lcm++) {
        if(lcm % x == 0 && lcm % y == 0 && lcm % z == 0)
            break;
    }

    printf("%d", lcm);
    return 0;
}
