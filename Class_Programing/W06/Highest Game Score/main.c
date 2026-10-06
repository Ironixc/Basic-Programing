#include <stdio.h>
#include <stdlib.h>

int findMax(int arr[], int n){
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if(x < arr[i])
        {
            x = arr[i];
        }
    }
    return x;
}

int main()
{
    int a,b[100],c = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        scanf("%d", &b[i]);
    }
    c = findMax(b,a);
    printf("%d", c);
    return 0;
}
