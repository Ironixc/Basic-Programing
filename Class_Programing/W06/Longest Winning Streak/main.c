#include <stdio.h>
#include <stdlib.h>

int isEven(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int longestEvenStreak(int arr[], int n)
{
    int x = 0,c = 0;
    for (int i = 0; i < n; i++)
    {
        if(isEven(arr[i]) == 1)
        {
            x++;
        }
        else
        {
            x = 0;
        }
        if(x > c)
        {
            c = x;
        }
    }
    return c;

}

int main()
{
    int a,b[100],c = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    c = longestEvenStreak(b,a);
    printf("%d", c);
    return 0;
}
