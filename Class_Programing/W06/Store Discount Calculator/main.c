#include <stdio.h>
#include <stdlib.h>

int calculatePrice(int price, int discount)
{
    if (discount >= price)
    {
        return 0;
    }
    else
    {
        return price - discount;
    }
}
int main()
{
    int a,b,c = 0;
    scanf("%d %d",&a, &b);
    c = calculatePrice(a,b);
    printf("%d", c);
    return 0;
}
