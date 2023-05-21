#include "stdio.h"

#define matrixAWidth 5
#define matrixAHeight 3

#define matrixBWidth 2
#define matrixBHeight 5

#define matrixResultHeight 3
#define matrixResultWidth 2

int main()
{
    
    int matrixA[matrixAHeight][matrixAWidth] = {{2, -1, 5, 7, 12}, {0, 9, 7, 6, 5}, {-3, 0, 1, -1, 0}};
    int matrixB[matrixBHeight][matrixBWidth] = {{1, -2}, {2, 0}, {3, 1}, {1, 0}, {-1, 1}};
    int matrixResult[matrixResultHeight][matrixResultWidth] = {{0, 0}, {0, 0}, {0, 0}};

    for (int i = 0; i < matrixResultHeight; i++)
    {
        for (int k = 0; k < matrixResultWidth; k++)
        {
            for (int j = 0; j < matrixAWidth; j++)
            {
                matrixResult[i][k] = matrixResult[i][k] + matrixA[i][j] * matrixB[j][k];
            }
            
        }
        
    }
    
    for (int i = 0; i < matrixResultHeight; i++)
    {
        for (int j = 0; j < matrixResultWidth; j++)
        {
            printf("%d ", matrixResult[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}
