#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c;
    int d,e,f;
    scanf("%c %c %c", &a,&b,&c);

    if (a >= 65 && a <= 90){
        a = a - 38;

    }else{
        a = a - 96;
    }
    if (c >= 65 && c <= 90){
        c = c - 38;

    }else{
        c = c - 96;
    }


    if (b == 43){

        d = a + c;
    }
    if (b == 45){
        d = a - c;
    }
    if (b == 42){
        d = a * c;
    }
    if (b == 47){
        d = a / c;
    }
    if (b == 37){
        d = a % c;
    }
    e = d % 52;
    if (e == 0){
        e = 52;
    }
    if (e < 0){
        e = e * -1;
        e = 52 - e;
    }
    if(e > 0 && e <= 26){
        f = e + 96;
    }else{
        f = e + 64 - 26;
    }

    printf("%c", f);
}
