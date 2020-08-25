#include <stdio.h>

int main ()

{

    static int array[10][10];

    int i, j, m, n;

    int counter = 0;

 

   

    scanf("%d %d", &m, &n);

    
    for (i = 0; i < m; ++i)

    {

        for (j = 0; j < n; ++j)

        {

            scanf("%d", &array[i][j]);
            if (array[i][j] == 0)

            {

                ++counter;

            }

        }

    }

    if (counter > ((m * n) / 2))

    {

        printf("YES\n");

    }

    else

        printf("NO \n");


}
