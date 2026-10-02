#include <stdio.h>
#include <math.h>


int main(){
    int a;
    long long b,c;
    scanf("%d %lld", &a, &b);
    switch (a) {
    case 1:
        c = pow(b, 2);
        printf("%lld", c);
        break;
    case 2:
        c = pow(b, 2) + b;
        printf("%lld", c);
        break;
    case 3:
        c = (b*(b+1)*(b+2)) / 6;
        printf("%lld", c);
        break;
    case 4:
        c = pow(b*(b+1)/2, 2);
        printf("%lld", c);
        break;
    default:
    printf("MODE TIDAK VALID");
}
    return 0;
}