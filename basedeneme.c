#include <stdio.h>
int main(){

char grid[9][27];
int i, j;
for (i = 0; i < 9; i++){
    for(j = 0; j < 27 ; j++){
        grid[i][j] = '.';
    }
}
grid[1][4] = grid[2][12] = grid[4][4] = grid[5][15] = grid[7][6] = grid[7][21] = grid[8][2] = grid[8][10] = 'o';
i = 0;
j = 0;

for (i = 0; i < 9; i++){
    for(j = 0; j < 27 ; j++){
        printf("%c",grid[i][j]);
    }
    printf("\n");
}
}