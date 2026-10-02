#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d %d", &a, &b);
    c = a / 60 ;
    if (a % 60 != 0){
        c++;
    }
    c--;
    if (b == 0){
        d = 3000;
        d += c * 2000;
        if (d >= 25000){
            d = 25000;
        }
        }
    else{
        d = 4000;
        d += c * 2000;
            if (d >= 26000){
            d = 26000;
        }

    }
    printf("%d", d);
}
