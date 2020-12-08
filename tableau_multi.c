#include <stdbool.h>
#include <stdio.h>

#define NBR_PTS 5
#define NBR_COORD 3 // X Y Z

/*
p0 : 0   0   0
p1 : 0   0   0
p2 : 1   0   2
p3 : 4   2   1
p4 : -1  56  -6
*/


void setPoint(int point[], int x, int y, int z){
    point[0] = x;
    point[1] = y;
    point[2] = z;
}

void read(const double tab[], double* x, double* y){
    *x = tab[0];
    *y = tab[1];
}

#define NBR_CHAR 128
int main(int argc, char* argv[])
{
    // Introduction passage variable en tableau
    double meas0[] = {1.0, 2.0, 3.0};
    double meas1[] = {1.1, 2.1, 3.1};
    double meas2[] = {1.2, 2.2, 3.2};
    double meas3[] = {1.3, 2.3, 3.3};

    // init tout à 0
    double meas[4][3] = {0};

    // init impossible
    //meas[0] = {1.0, 2.0, 3.0};

    // change les valeurs d'un tableau
    meas[0][0] = 1.0;
    meas[0][1] = 2.0;
    meas[0][2] = 3.0;

    // init complet
    double meas10[4][3] = 
    {
        {1.0, 2.0, 3.0},
        {1.1, 2.1, 3.1},
        {1.2, 2.2, 3.2},
        {1.3, 2.3, 3.3}
    };


    // points x y z
    int points_no_init[NBR_PTS][3]; // non initialisé

    // NBR_PTS optional
    int points[NBR_PTS][3] = 
    {
        {0,0,0},
        {0,0,0},
        {1,0,2},
        {4,2,1},
        {-1,56,-6}
    };
        

    points[0][0] = 1;
    points[0][1] = 2;
    points[0][2] = 3;


    points[0]; // => tableau 3 entiers

    setPoint(points[1], 10, 20, 30);

    for(int p=0; p<NBR_PTS; p++){
        for(int c=0; c<NBR_COORD; c++){
            printf(" %4d", points[p][c]);
        }
        printf("\n");
    }
}

