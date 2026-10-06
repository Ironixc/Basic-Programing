#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[1000];
    int Result = 0;
    scanf("%s", arr);
    for (int i = 0; i < strlen(arr); i++){
        if (arr[i] == '(' )
        {
            Result++;
        }else if(arr[i] == ')')
        {
            Result--;
        }
    }
    if (Result == 0){
        printf("Y");
    }
    if(Result != 0){
        printf("G");
    }
    return 0;
}
