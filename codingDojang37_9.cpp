#define _CRT_SECURE_NO_WARNINGS     // [37.9] 전치행렬 구하기
#include <stdio.h>

int main()
{
    int matrix[5][5];
    
    /*
    scanf("%d %d %d %d %d",
        &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3], &matrix[0][4]);
    scanf("%d %d %d %d %d",
        &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3], &matrix[1][4]);
    scanf("%d %d %d %d %d",
        &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3], &matrix[2][4]);
    scanf("%d %d %d %d %d",
        &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3], &matrix[3][4]);
    scanf("%d %d %d %d %d",
        &matrix[4][0], &matrix[4][1], &matrix[4][2], &matrix[4][3], &matrix[4][4]);
     */

    for (int i = 0; i < sizeof(matrix[0]) / sizeof(int); i++)
    {
        for (int j = 0; j < sizeof(matrix[0]) / sizeof(int); j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int m = 0; m < sizeof(matrix[0]) / sizeof(int); m++) 
    {
        for (int n = 0; n < sizeof(matrix) / sizeof(matrix[0]); n++) 
        {
            printf("%d ", matrix[n][m]);
        }
        printf("\n");
    }

        return 0;
}