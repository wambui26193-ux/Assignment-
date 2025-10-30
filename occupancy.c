/*
NAME:ANDLIANE KARANJA 
REG:CT100/G/26193/25
DESCRIPTION:2D array to show occupied and vacant rooms
*/

#include <stdio.h>

int main() {
    
    int occupancy[5][10] = {
        
        {1,1,1,1,1,1,1,0,0,0},

        {1,1,1,1,1,0,0,0,0,0},

        {1,1,1,1,1,1,1,1,1,0},

        {1,1,1,0,0,0,0,0,0,0},

        {1,1,1,1,0,0,0,0,0,0}
    };

    int occupied, vacant;

    
    for(int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for(int room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor: %d \n%drooms are occupied, %d  rooms are vacant.\n",
               floor + 1, occupied, vacant);
    }

    return 0;
}