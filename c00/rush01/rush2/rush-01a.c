#include <stdio.h>
#include <stdlib.h>

void    convert(char *str, int *array[])
{
    int i;
    int j;

    i = 0;
    while(i < 4)
    {
        j = 0;
        while (j < 4)
        {
            array[i][j] = 0;
            j++;
        }
        i++;
    }
    i = 0;
    while (str[i] != '\0' && i < 8)//4leri yazdırdım
    {
        if (str[i / 2] == 1)
            array[i][0] = 4;
        i += 2;
    }
}

void    ft_settera(int *array[], int i, int val)
{
    if (val == 0)
    {
        array[0][i] = 1;
        array[1][i] = 2;
        array[2][i] = 3;
        array[3][i] = 4;
    }
}

void    ft_write(int   *array[], char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0' && i < 8)
    {
        if (str[i] == 4)
            ft_settera(array, i, 0);
        i += 2;
    }
}
void    ft_print(int *array[])
{
    int i;
    int j;

    i = 0;
    while (i < 4){
        j = 0;
        while (j < 4){
            printf("%d ", array[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
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
        convert(arg[1], array);
        ft_write(array, arg[1]);
        ft_print(array);
        free(array[0]);
        free(array);
        return (0);
    }
    else
        return (1);
}
