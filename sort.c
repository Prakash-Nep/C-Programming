#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, m, n, choice;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &m, &n);

    printf("\nEnter elements of first matrix (A):\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix (B):\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n***** Matrix Operations *****\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                c[i][j] = a[i][j] + b[i][j];
        printf("\nResult of Addition:\n");
        break;

    case 2:
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                c[i][j] = a[i][j] - b[i][j];
        printf("\nResult of Subtraction:\n");
        break;

    case 3:
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                c[i][j] = a[i][j] * b[i][j];
        printf("\nResult of Multiplication:\n");
        break;

    case 4:
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
            {
                if (b[i][j] != 0)
                    c[i][j] = a[i][j] / b[i][j];
                else
                    c[i][j] = 0; // Avoid divide-by-zero crash
            }
        printf("\nResult of Division:\n");
        break;

    default:
        printf("\nInvalid choice!");
        getch();
        return;
    }

    // Display Result Matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

    getch();
}