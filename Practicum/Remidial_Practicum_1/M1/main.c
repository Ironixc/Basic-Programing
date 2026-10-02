#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,N12,N11,N10,N9,N8,N7,N6,N5,N4,N3,N2,N1,N = 0;
    scanf("%d", &a);
    N12 = a / 2048;
    if (N12 >= 1){
        N12 = 1;
        a = a - 2048;
    }
    N11 = a / 1024;
    if (N11 >= 1){
        N11 = 1;
        a = a - 1024;
    }
    N10 = a / 512;
    if (N10 >= 1){
        N10 = 1;
        a = a - 512;
    }
    N9 = a / 256;
    if (N9 >= 1){
        N9 = 1;
        a = a - 256;
    }
    N8 = a / 128;
    if (N8 >= 1){
        N8 = 1;
        a = a - 128;
    }
    N7 = a / 64;
    if (N7 >= 1){
        N7 = 1;
        a = a - 64;
    }
    N6 = a / 32;
    if (N6 >= 1){
        N6 = 1;
        a = a - 32;
    }
    N5 = a / 16;
    if (N5 >= 1){
        N5 = 1;
        a = a - 16;
    }
    N4 = a / 8;
    if (N4 >= 1){
        N4 = 1;
        a = a - 8;
    }
    N3 = a / 4;
    if (N3 >= 1){
        N3 = 1;
        a = a - 4;
    }
    N2 = a / 2;
    if (N2 >= 1){
        N2 = 1;
        a = a - 2;
    }
    N1 = a / 1;
    if (N1 >= 1){
        N1 = 1;
        a = a - 1;
    }
    N += N4 * 2048;
    N += N3 * 1024;
    N += N2 * 512;
    N += N1 * 256;
    N += N8 * 128;
    N += N7 * 64;
    N += N6 * 32;
    N += N5 * 16;
    N += N12 * 8;
    N += N11 * 4;
    N += N10 * 2;
    N += N9 * 1;
    printf("%d", N);

    return 0;
}
