#include <stdio.h>

int main()
{
    int m, n, x, y;
    int a[m][n], b[x][y], c[m][y];
    printf("Dimensionen der Matrix A\n");
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);

    printf("Dimensionen der Matrix B\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    if (n != x)
    {
        printf("Error! Matrixmultiplikation nicht moeglich!\n");
        return 1;
    }

    printf("Matrix A\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element in (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
            printf("\nDEBUG: %d\n", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B\n");
    for (int k = 0; k < x; k++)
    {
        for (int l = 0; l < y; l++)
        {
            printf("Element in (%d, %d): ", k, l);
            scanf("%d", &b[k][l]);
        }
        printf("\n");
    }

    printf("Matrix A\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Matrix Mult
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < n; k++)
            {
                printf("(%d, %d) * (%d, %d)\n", i, k, k, j);
                printf("%d * %d\n\n", a[i][k], b[k][j]);
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("\n");
        }
    }

    printf("Ergebnis:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}