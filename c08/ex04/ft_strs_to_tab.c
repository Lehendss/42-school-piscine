#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = -1;
    while(src[++i])
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char    *ft_strdup(char *str)
{
    char    *dup;

    dup = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
    if (dup == NULL)
        return (NULL);
    dup = ft_strcpy(dup, str);
    return (dup);
}


struct s_stock_str *ft_strs_to_tab (int ac, char **av)
{
    int i;
    struct s_stock_str  *strs;

    strs = malloc((ac + 1) * sizeof(struct s_stock_str));
    if (strs == NULL)
        return (NULL);
    i = -1;
    while (++i < ac)
    {
        strs[i].str = av[i];
        strs[i].size = ft_strlen(av[i]);
        strs[i].copy = ft_strdup(av[i]);
    }
    return strs;
}T
