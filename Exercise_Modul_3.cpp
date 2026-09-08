#include <stdio.h>

int Max;
int Min;

int Factorial(int a)
{
    int result;
    if (a <= 1)
    {
        return 1;
    }
    result = a * Factorial(a - 1);
    return result;
}

int Pyramidal(int a)
{
    int result;
    if (a <= 1)
    {
        return 1;
    }
    result = a * a + Pyramidal(a - 1);
    // printf("%d", result);
    return result;
}

int Max_Min(int a, int b)
{
    if (a == 1)
    {
        Max = b;
        Min = b;
    }
    else
    {
        if (Max <= b)
        {
            Max = b;
        }
        if (Min >= b)
        {
            Min = b;
        }
    }
}

void exercise1()
{
    // printf("\nExercise 1\n");
    int a;
    // printf("Input Number : ");
    scanf("%d", &a);
    printf("%d", Factorial(a));
}

void exercise2()
{
    // printf("\nExercise 1\n");
    int a;
    // printf("Input Number : ");
    scanf("%d", &a);
    printf("%d", Pyramidal(a));
}

void exercise3()
{
    // printf("\nExercise 1\n");
    int a, b[99];
    // printf("Input Number : ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b[i]);
        Max_Min(i, b[i]);
    }
    printf("%d\n", Max);
    printf("%d", Min);
}

int main()
{
    printf("What Exercise : ");
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