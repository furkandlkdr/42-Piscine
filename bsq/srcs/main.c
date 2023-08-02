#include <unistd.h>
#include <stdlib.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if (argc >= 2)
    {
        while (i < argc)
        {
            char *map_str;
            char **map_arr;
            int j;

            j = 0;
            map_str = ft_readfile(argv[i]);
            map_arr = ft_matrix(map_str, ft_start(map_str), 1);
            while(j < find_column(map_str,1))
            {
                ft_putstr(map_arr[j]);
                j++;
            }
            ft_putstr("\nFFFFFFFFFFFFFFFFFFFFFFFFFFF\n");
            free(map_str);
            free(map_arr);
            i++;
        }
    }
    else
    {
        char    *map;
        char **map_arr;
        int j;

        map = ft_get_data();
        map_arr = ft_matrix(map, 0, 0);

        j = 0;
        while(j < find_column(map, 0))
        {
            ft_putstr(map_arr[j]);
            j++;
        }
    }
}