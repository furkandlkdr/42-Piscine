#include <unistd.h>
#include <stdlib.h>

char *ft_get_data()
{
    char *str;
    int byteread;
    char *buffer;
    int i;

    str = malloc(sizeof(char) * 2048 * 2048);
    i = 0;
    while(1)
    {
        buffer = malloc(sizeof(char));
        byteread = read(0, buffer, 1);
        if (buffer[0] == '!')
            break;
        str[i] = buffer[0];
        free(buffer);
        i++;
    }
    return (str);
}