#include <unistd.h>
#include <stdlib.h>

int ft_isdigit(char *str);

int *ft_start(char *str)
{
    int i;
    int j;
    int *elem;

    elem = malloc(4 * sizeof(int));
    i = 0;
    j = 1;
    while(str[i] != '\n')
    {
        if (ft_isdigit(str[i]) == 0 && j < 3)
        {
            elem[j] = str[i];
            j++;
        }
        i++;
    }
    elem[0] = i + 1;
    return (elem);
}

int find_row(char *str, int isfile)
{
    int i;
    int row;

    i = 0;
    if (isfile == 1)
        i = (ft_start(*str)[0]);
    row = 0;
    while(1)
    {
        if(str[i] == '\n')
            break;
        i++;
        row++;
    }
    return (row);
}

int find_column(char *str, int isfile, char *elem)
{
    int i;
    int col;

    i = 0;
    col = 0;
    while(str[i] != '\n' && isfile == 1)
        i++;
    while(str[i] == elem[0] || str[i] == elem[1] || str[i] == '\n')
    {
        if(str[i] == '\n')
            col++;
        i++;
    }
    return (col);
}

char    *readfile(char *file)
{
    char *c;
    int of;
    int rf;

    c = malloc(sizeof(char) * 2048 * 2048);
    of = open(file, 2);
    rf = read(of, c, 1024*1024);
    return (c);
}

char **ft_matrix(char *str, int start_pos, int isfile, char *elem)
{
    char **arr;
    int i;
    int j;
    int add_s;

    arr = malloc(sizeof(int *) * find_column(str,isfile, elem));
    i = 0;
    add_s = start_pos;
    while (i < find_column(str, isfile, elem))
    {
        arr[i] = malloc(sizeof(char *) * (find_row(str, isfile) + 1));
        j = 0;
        while (j <= find_row(str, isfile))
        {
            if (str[add_s] != '\n')
                arr[i][j] = str[add_s];
            else
            {
                arr[i][j] = '\0';
                add_s++;
                j++;
            }
        }
    }
    return (arr);
}