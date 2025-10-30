/*
NAME:ANDLIANE KARANJA 
REG:CT100/G/26193/25
DESCRIPTION:3D array for a hotel chain
*/

#include <stdio.h>

int main() {

    
    int chain[3][5][10] = {

        
        {
            {1,0,1,1,0,1,0,1,0,1},
            {1,1,0,0,1,1,0,0,1,0},
            {0,0,1,1,1,0,1,0,0,1},
            {1,1,1,0,0,0,1,1,1,0},
            {0,1,0,1,1,0,1,0,1,1}
        },

        
        {
            {0,1,1,0,0,1,1,1,0,0},
            {1,0,1,1,0,1,1,0,1,1},
            {0,1,0,0,1,0,1,1,0,1},
            {1,1,1,1,0,0,1,0,1,0},
            {0,0,0,1,1,1,0,1,0,1}
        },

        
        {
            {1,1,1,1,1,0,0,0,1,1},
            {0,0,1,0,1,1,1,1,0,0},
            {1,0,0,1,1,1,0,0,1,0},
            {0,1,1,0,0,1,1,1,0,1},
            {1,1,0,1,0,1,1,0,0,1}
        }
    };

    int totalOccupied = 0;

    
    for(int i = 0; i < 3; i++) {
        printf("Branch %d:\n", i+1);

        for(int j = 0; j< 5; j++) {
            for(int k = 0; k < 10; k++) {
                printf("%d ", chain[i][j][k]);
                totalOccupied += chain[i][j][k];
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("Total occupied rooms = %d\n", totalOccupied);

    return 0;
}