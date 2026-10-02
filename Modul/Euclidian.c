#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,d,e;
    scanf("%f" "%f", &a, &b);
    scanf("%f" "%f", &c, &d);
    e = sqrtf(powf(c - a, 2) + powf(d - b, 2));
    printf("%.2f", e);
}
