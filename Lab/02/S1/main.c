#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    bool r = true;
    int a1,a2,b1,b2;
    char t1[100][100];

    scanf("%d %d", &a1,&a2);

    for (int i = 0; i < a1; i++)
    {
        for(int j = 0; j < a2; j++)
        {
            scanf(" %c", &t1[i][j]);
        }
    }
    int dh[]= {1,1,0,-1,-1,-1,0,1};
    int dv[]= {0,-1,-1,-1,0,1,1,1};

    scanf("%d %d", &b1,&b2);

    b1--;
    b2--;

    for (int i = 0; i < 8; i++)
    {
        if(b2 + dv[i] < a2 && b1 + dh[i] < a1 &&
           b2 + dv[i] >= 0 && b1 + dh[i] >= 0 )
        {
            if(t1[b1 + dh[i]][b2 + dv[i]] != 'x' &&
                    t1[b1 + dh[i]][b2 + dv[i]] != 'X')
            {
                r = false;
                break;
            }

        }
    }
    if (r == true){
        printf("yes");
    }else {
        printf("no");
    }
    return 0;
}
