int ft_strlen(char *str)
{
    int i;

    i =0;
    while (str[i])
        i++;
    return (i);
}

unsigned    int ft_strlcpy(char *dest, char *src, unsigned int size)
{   
    unsigned    int i;
    unsigned    int srclen;
    
    i = 0;
    srclen = ft_strlen(src);
    while (src[i] && size--)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (srclen);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char    src[] = "Hello6";
    char    dest[] = "my";
    printf("%d\n", ft_strlcpy(dest, src, sizeof(dest)));

}*/
