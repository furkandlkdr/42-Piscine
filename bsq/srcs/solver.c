#include <unistd.h>
#include <stdlib.h>

int ft_isdigit(char c)
{
    if (c < '0' || c > '9')
            return (0);
    return (1);
}

char    **ft_solve(char *str[], int x, int y, char *elem)
{
    int **map_arr;
    int i;
    int j;

    i = 0;
    map_arr = malloc(y * sizeof(int *));
    while (i < x)
    {
        map_arr[i] = malloc(x * sizeof(int));
        j = 0;
        while (j < y)
        {
            map_arr[i][j] = str[i][j];
            j++;
        }
        i++;
    }
}