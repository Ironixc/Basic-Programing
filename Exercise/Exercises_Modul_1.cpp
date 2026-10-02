#include <stdio.h>

void exercise1()
{
    printf("Exercise 1\n");
    int a, b, c, d;
    printf("Enter 3-digit number(non negatif):");

    scanf("%d", &a);
    if (a > 1000 || a < 0)
    {
        printf("Invalid input\n");
        return;
    }
    else
    {
        b = a / 100;
        c = a / 10 % 10;
        d = a % 10;
        b = b * b * b;
        c = c * c * c;
        d = d * d * d;
        // printf("%d\n", b);
        // printf("%d\n", c);
        // printf("%d\n", d);
        if (b + c + d == a)
        {
            printf("Is an Armstrong number");
        }
        else
        {
            printf("Is not an Armstrong number");
        }
    }
}

void exercise2()
{
    char *satuan[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Sebelas"};
    printf("Exercise 2\n");
    int a;
    printf("Enter 3-digit number(non negatif):");
    scanf("%d", &a);
    if (a > 1000 || a < 0)
    {
        printf("Invalid input\n");
        return;
    }
    else
    {
        if (a <= 999 && a >= 200)
        {
            printf("%s Ratus ", satuan[a / 100]);
        }
        if (a >= 100 && a < 200)
        {
            printf("Seratus ");
        }
        a = a % 100;
        if (a >= 20)
        {
            printf("%s Puluh ", satuan[a / 10]);
            a = a % 10;
        }
        if (a <= 19 && a >= 12)
        {
            printf("%s Belas ", satuan[a / 10]);
        }
        else if (a <= 11)
        {
            printf(satuan[a]);
        }
    }
}
void exercise3()
{
    char *segment_map[11] = {
        "1 1 1 1 1 1 0", // 0
        "0 1 1 0 0 0 0", // 1
        "1 1 0 1 1 0 1", // 2
        "1 1 1 1 0 0 1", // 3
        "0 1 1 0 0 1 1", // 4
        "1 0 1 1 0 1 1", // 5
        "1 0 1 1 1 1 1", // 6
        "1 1 1 0 0 0 0", // 7
        "1 1 1 1 1 1 1", // 8
        "1 1 1 1 0 1 1", // 9
        "0 0 0 0 0 0 0"  //Invalid
    };
    printf("Exercise 3\n");
    printf("Input the Biner Numbers\n");
    int multi = 8;
    int Biner[4];
    int numbers = 0;
    for (int i = 0; i <= 3; i++)
    {
        printf("Biner %d : ", i);
        scanf("%d", &Biner[i]);
        if (Biner[i] != 0 && Biner[i] != 1)
        {
            printf("Invalid input\n");
            return;
        }
        numbers += Biner[i] * multi;
        multi /= 2;
    }
    printf("%d\n", numbers);
    if (numbers <= 9 && numbers >= 0)
    {
        printf("%s \n", segment_map[numbers]);
    }
    else
    {
        printf("%s \n", segment_map[10]);
    }
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
    default:
        printf("Invalid Input");
        break;
    }
}
