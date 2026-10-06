#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,c = 0, max1 = 0, max2 = 0;
    int b[100];
    scanf("%d", &a);
    for (int i = 0; a != 0; i++)
    {
        if (a % 2 == 0)
        {
            b[i] = 0;
        }
        else
        {
            b[i] = 1;
        }
        a = a / 2;
        c++;

    }

    for (int i = 0; i < c; i++)
    {
        if (b[c - i - 1] == 0)
        {
            if (max1 >= max2)
            {
                max2 = max1;
            }
            max1 = 0;
        }
        else
        {
            max1 += 1;
        }
    }
    if (max1 >= max2){
        max2 = max1;
    }
    printf("%d", max2);

    return 0;
}
