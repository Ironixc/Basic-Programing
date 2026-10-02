#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,T1,T2 = 0,Car,x;
    scanf("%d %d %d", &a,&b,&c);
    T1 = c / 60;
    T2 = c % 60;
    if (T2 > 20){
        T2 = (T2 - 20) / 4;
    }else {
    T2 = 0;}
    Car = (T1 * 10) + T2;
    b = b + 1;
    x = a + b - Car;

    if (Car > a){
        if (x < 0){
            x = 0;
        }
        printf("YES! %d", x);
    }
    if (Car <= a){
        printf("NO! %d", x);
    }
    return 0;
}
