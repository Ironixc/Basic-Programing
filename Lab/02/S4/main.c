#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,c = 0, max1 = 0,c1 = 0,a1;
    int b[100] = {0},d[100] = {0};
    scanf("%d %d", &a, &a1);
    for (int i = 0; a != 0 || a1 != 0; i++)
    {
        if (a != 0)
        {
            if (a % 2 == 0)
            {
                b[i] = 0;
                c++;
            }
            else
            {
                b[i] = 1;
                c++;
            }
        }
        if (a1 != 0)
        {
            if (a1 % 2 == 0)
            {
                d[i] = 0;
                c1++;
            }
            else
            {
                d[i] = 1;
                c1++;
            }
        }
        a = a / 2;
        a1 = a1 / 2;
    }
    if (c >= c1)
    {
        c1 = c;
    }
    for (int i = 0; i < c1; i++)
    {
        if (b[c1 - i - 1] != d[c1 - i - 1])
        {
            max1++;
        }
    }
    printf("%d", max1);

    return 0;
}
