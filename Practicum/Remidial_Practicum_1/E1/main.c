#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,x,y;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    x = (a % b) - c;
    y = (a / d) - c;

    if (x > 0 &&  y > 0){
        printf("Poppi di Hutan");
    }
      else if (x < 0 &&  y > 0){
        printf("Poppi di Sungai");
    }
      else if (x < 0 &&  y < 0){
        printf("Poppi di Tambang");
    }
      else if (x > 0 &&  y < 0){
        printf("Poppi di Kebun Sawit");
    }
      else if (x == 0 &&  y == 0){
        printf("bersama Masterpon");
    }
      else if (x == 0 ||  y == 0){
        printf("Perbatasan");
    }

    return 0;
}
