#include<stdio.h>
int main()
{
    static int array[10][10];
    int i, j, m, n;

    scanf("%d %d", &m, &n);
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }
 
 
    for (j = 0; j < n; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
