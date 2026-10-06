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

int main()
{
    int a,b[100],c = 0;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
        c += isEven(b[i]);
    }
    printf("%d", c);

    return 0;
}
