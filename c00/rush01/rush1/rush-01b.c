void    ft_settera(int *array[], int i, int val)
{
    if (val == 0)
    {
        array[0][i] = 4;
        array[1][i] = 3;
        array[2][i] = 2;
        array[3][i] = 1;
    }
    if (val == 1)
    {
        array[3][i] = 4;
        array[2][i] = 3;
        array[1][i] = 2;
        array[0][i] = 1;
    }
    if (val == 2)
    {
        array[0][i] = 4;
        array[3][i] = 3;
    }
    if (val == 3)
    {
        array[0][i] = 3;
        array[3][i] = 4;
    }
}

void    ft_setterb(int *array[], int i, int val)
{
    if (val == 0)
    {
        array[1][i] = 4;
        array[2][i] = 3;
    }
    if (val == 1)
    {
        array[1][i] = 3;
        array[3][i] = 4;
    }
    if (val == 2)
    {
        array[2][i] = 3;
        array[0][i] = 4;
    }
    if (val == 3)
    {

    }
}

void    ft_write(int   *array[], char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0' && i < 8)
    {
        if (str[i] == '1' && str[i + 8] == '4')
            ft_settera(array, (i / 2) , 0);
        else if (str[i] == '4' && str[i + 8] == '1')
            ft_settera(array, (i / 2), 1);
        else if (str[i] == '1' && str[i + 8] == '2')
            ft_settera(array, (i / 2), 2);
        else if (str[i] == '2' && str[i + 8] == '1')
            ft_settera(array, (i / 2), 3);
        else if (str[i] == '2' && str[i + 8] == '2')
            ft_setterb(array, (i / 2), 0);
        else if (str[i] == '3' && str[i + 8] == '1')
            ft_setterb(array, (i / 2), 1);
        else if (str[i] == '1' && str[i + 8] == '3')
            ft_setterb(array, (i / 2), 2);
        i += 2;
    }
}