#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int a1,a2;
    int t1[100][100];

    scanf("%d %d", &a1,&a2);

    for (int i = 0; i < a1; i++)
    {
        for(int j = 0; j < a2; j++)
        {
            scanf("%d", &t1[i][j]);
        }
    }
    for (int i = 0; i < a1; i++){
        for(int j = 0; j < a2; j++){
            printf("%d ", t1[i][a2 - j - 1]);
        }
        printf("\n");
    }
}
