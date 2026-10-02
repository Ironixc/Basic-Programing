#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a,cx,cy;
    scanf("%d", &a);
    int L[a][a];
    bool T = true;
    cx = 0;
    cy = 0;
    for (int i = 1; i <= a * a; i++){
        L[cy][cx] = i;
        if(T == true){
            if (cx + 1 == a){
                cy++;
                T = false;
            }
            else if(cy == 0){
                cx++;
                T = false;
            }else{
                cx++;
                cy--;
            }
        }else{
            if (cy + 1 == a){
                cx++;
                T = true;
            }
            else if (cx == 0){
                cy++;
                T = true;

            }else{
                cy++;
                cx--;
            }
        }
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            printf("%d ", L[i][j]);
        }
        printf("\n");
    }
}
