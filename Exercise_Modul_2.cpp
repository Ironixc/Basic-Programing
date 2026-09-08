#include <iostream>
#include <string.h>

void exercise1()
{
    printf("\nExercise 1\n");
    int a;
    printf("Input number : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

void exercise2()
{
    printf("\nExercise 2\n");
    int a;
    printf("Input number : ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            printf("* ");
        }
        else
        {
            printf("%d ", i);
        }
    }
}

void exercise3()
{
    printf("\nExercise 3\n");
    int a;
    int b = 2;
    printf("Input number : ");
    scanf("%d", &a);
    while (b <= a)
    {
        bool prime = false;
        for (int i = 2; i * i <= b; i++)
        {
            if (b % i == 0)
            {
                prime = true;
                break;
            }
        }
        if (prime != true)
        {
            printf("* ");
        }
        else
        {
            printf("%d ", b);
        }
        b++;
    }
}

void exercise4()
{
    printf("\nExercise 4\n");
    int a = 0;
    printf("Input number: ");
    scanf("%d", &a);
    int b[999];
    for (int i = 0; i < a; i++)
    {
        printf("Number %d : ", i + 1);
        scanf("%d", &b[i]);
    }
    for (int i = 1; i <= a; i++)
    {
        printf("%d\n", b[a - i]);
    }
}
void exercise5()
{
    printf("\nExercise 5\n");
    int a = 0, i = 0, u = 0, e = 0, o = 0;
    char w[100];
    printf("Enter a word : ");
    scanf("%100s", w);
    for (int i = 0; w[i] != '\0'; i++)
    {
        if (w[i] == 'a' || w[i] == 'A')
        {
            a++;
        }
        if (w[i] == 'i' || w[i] == 'I')
        {
            i++;
        }
        if (w[i] == 'u' || w[i] == 'U')
        {
            u++;
        }
        if (w[i] == 'e' || w[i] == 'E')
        {
            e++;
        }
        if (w[i] == 'o' || w[i] == 'O')
        {
            o++;
        }
    }
    printf("A/a : %d\n", a);
    printf("I/i : %d\n", i);
    printf("U/u : %d\n", u);
    printf("E/e : %d\n", e);
    printf("O/o : %d\n", o);
}

void exercise6(){
    printf("\nExercise 6\n");
    char w[100];
    printf("\nYou can only use lowercase, uppercase letters, and underscore (_)");
    printf("\nEnter a word : ");
    scanf("%100s", w);
    for (int i = 0; w[i] != '\0'; i++)
    {
        if(w[i] > 0 && w[i - 1] == '_'){
            w[i] = toupper(w[i]);
            w[i- 1] = ' ';
            for(int j = i; w[j] != '\0'; j++){
                w[i-1] = j; 
            }
        }else{
            w[i] = towlower(w[i]);
        }
    }
    printf("%s", w); 
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
        case 5:
        exercise5();
        break;
                case 6:
        exercise6();
        break;
    default:
        printf("Invalid Input");
        break;
    }
}
