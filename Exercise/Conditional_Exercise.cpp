#include <stdio.h>

void exercise1(){
    int a;
    scanf("%d", &a);
    if (a <= 1.0){
        printf("250");
    }else if (a > 1.0 && a <= 2.0){
        printf("500");
    }else if (a > 2.0 && a <= 5.0){
        printf("1000");
    }else if (a > 5.0 && a <= 10.0){
        printf ("1500");
    }else if (a > 10.0){
        printf("2000");
    }
}

void exercise2(){
    char a;
    scanf("%s", &a);
    if (a == 'Y' || a == 'y'){
        printf("Hydorgen");
    }
    if (a == 'o' || a == 'O'){
        printf("ammonia");
    }
    if (a == 'B' || a == 'b'){
        printf("oxygen");
    }
    if (a == 'G' || a == 'g'){
        printf("carbon monoxide");
    }
}

void exercise3(){
    int a = 0;
    scanf("%d", &a);
    if (a <= 100000 && a <= -100000){
        return;
    }
    for (int i = 1; i <= 6; i++){
        int result = a % 10;
        if (result == 4 || result == -4 ){
            printf("Server");
            return;
        }
        a /= 10;
        // printf("%d\n", a);
    }
    printf("Unite");
}

int main(){
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
    default:
        printf("Invalid Input");
        break;
    }
}