#include <stdio.h>
#include <stdlib.h>

/*int findSecondMax(int arr[], int n){
    int x = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] < arr[i + 1] && i + 1 < n){
            int t = arr[i];
            arr[i] = arr[i+1];
            arr[i + 1] = t;
        }
    }
    return x;
}*/

int findSecondMax(int arr[], int n)
{
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if(x < arr[i])
        {
            x = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(y < arr[i] && i != x)
        {
            y = arr[i];
        }
    }
    return y;
}

int main()
{
    int a,b[100],c = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    c = findSecondMax(b,a);
    printf("%d", c);
    return 0;
}
