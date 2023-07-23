#include <stdlib.h>
#include <unistd.h>

void    ft_write(int   *array[], char *str);

void    ft_check(int *array[], char *str)
{

}

int main(int argc, char *arg[])
{
    if (argc == 2)
    {
        int i;
        int **array = (int **)malloc(4 * sizeof(int *));

        i = 0;
        while (i < 4)
            array[i] = (int *)malloc(4 * sizeof(int));
        ft_write(array, arg[1]);

        free(array);
        return (0);
    }
    else
        return (1);
}