#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a,b,c,d,e,f,g,h,i,j,k;
    scanf("%lld %lld %lld\n", &a,&b,&c);
    scanf("%lld %lld",&d,&e);
    i = e - b;
    f = 1 + (d * d);
    g = 2 * ((d * i) - a);
    h = (a * a)  + (i * i) - c;
    j = (g * g) - (4 * f * h);
    if (j > 0){
        printf("We're cooked.");
    }
    if (j == 0){
        printf("Kegores dikit ga ngaruh.");
    }
    if (j < 0){
        printf("We're so back.");
    }

}
