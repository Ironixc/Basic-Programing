#include <stdio.h>

void exercise1(){
    int a,b;
    scanf("%d %d", &a , &b);
    b = b - a;
    printf("%d", b);
}

void exercise2(){
    int a,b,c,d;
    scanf("%d %d", &a , &b);
    c = a/b;
    d = a%b;
    printf("%d\n",c);
    printf("%d",d);
}

void exercise3(){
    float a,b,c,d;
    scanf("%d %d %d", &a , &b, &c);
    d = (a+b)/c;
    printf("%.2f", d);
}

void exercise4(){
    float a,b,c,d,e,Avg,Result;
    scanf("%f %f %f %f %f", &a , &b, &c, &d, &e);
    Result = a + b + c + d + e;
    Avg = Result / 5;
    printf("%0.f %.1f\n", Result, Avg); 
}
   

int main()
{
    printf("What Exercises:");
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        exercise1();
        break;
    case 2:
        exercise2();
        break;
    case 3:
        exercise3();
        break;
    case 4:
        exercise4();
        break;
    default:
        printf("Invalid Input");
        break;
    }
}
