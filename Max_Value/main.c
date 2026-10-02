#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    int number[100];
    int many[100] = {0};
    for (int i = 0 ; i < a; i++){
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < a; i++){
        many[number[i]]++;
    }
        printf(many[1]);

    return 0;
}
