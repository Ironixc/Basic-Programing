#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f1,f2,c,c1,c2;
    char m1,m2;
    scanf("%c %d %c %d", &m1,&f1,&m2,&f2);
    if (f1 < f2){
        c = f2 - f1;
        if (c >= 5){
            switch(m1){
        case 'L':
            printf("PLAYER 1 150");
            break;

        case 'M':
            printf("PLAYER 1 375");
            break;

        case 'H':
            printf("PLAYER 1 675");
            break;
            }
        }else{
            switch(m1){
        case 'L':
            printf("PLAYER 1 100");
            break;

        case 'M':
            printf("PLAYER 1 250");
            break;

        case 'H':
            printf("PLAYER 1 450");
            break;
            }
        }

    }
    if (f1 > f2){
        c = f1 - f2;
        if (c >= 5){
            switch(m2){
        case 'L':
            printf("PLAYER 2 150");
            break;

        case 'M':
            printf("PLAYER 2 375");
            break;

        case 'H':
            printf("PLAYER 2 675");
            break;
            }
        }else{

            switch(m2){
        case 'L':
            printf("PLAYER 2 100");
            break;

        case 'M':
            printf("PLAYER 2 250");
            break;

        case 'H':
            printf("PLAYER 2 450");
            break;
            }
        }
    }
    if (f1 == f2){
        if (m1 == m2){
             switch(m1){
        case 'L':
            printf("TRADE HIT 100");
            break;

        case 'M':
            printf("TRADE HIT 250");
            break;

        case 'H':
            printf("TRADE HIT 450");
            break;
            }
        }
        else{
             switch(m1){
        case 'L':
            c1 =  1;
                        break;

        case 'M':
            c1 =  2;
            break;

        case 'H':
            c1 =  3;
                        break;

            }
            switch(m2){
        case 'L':
            c2 =  1;
                        break;


        case 'M':
            c2 =  2;
                        break;


        case 'H':
            c2 =  3;
                        break;

            }
            if (c1 > c2){
                switch(m1){
        case 'L':
            printf("PLAYER 1 100");
            break;

        case 'M':
            printf("PLAYER 1 250");
            break;

        case 'H':
            printf("PLAYER 1 450");
            break;
            }
        }if(c2 > c1){
        switch(m2){
        case 'L':
            printf("PLAYER 2 100");
            break;

        case 'M':
            printf("PLAYER 2 250");
            break;

        case 'H':
            printf("PLAYER 2 450");
            break;
            }
        }

            }


    }
}


