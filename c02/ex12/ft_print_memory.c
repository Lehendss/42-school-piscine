#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_hex(unsigned long long nb, int prev)
{
    char    *base_hex;

    base_hex = "0123456789abcdef";
    if(nb < 16 && prev == 1)
        ft_putchar('0');
    if (nb >= 16)
    {
        ft_hex(nb / 16, 0);
        ft_hex(nb % 16, 0);
    }
    else
        ft_putchar(base_hex[nb]);
}

void    ft_print_addr(unsigned long long addr)
{
    unsigned long long tmp;
    int i;

    tmp = addr;
    i = 1;
    while (i++ < 15)
    {
        if (tmp < 16)
            ft_putchar('0');
        tmp /= 16;
    }
    ft_hex(addr, 0);
}

void    ft_print_string(unsigned char *c, int size)
{
    int i;

    i = -1;
    while (i++ < 16)
    {
        if (i % 2 == 0)
            ft_putchar(' ');
        if (i < size)
            ft_hex((unsigned long long)*(c + i), 1);
        else if (i != 16)
            ft_putchar(' ');
    }
    i = -1;
    while (i++ < size - 1)
    {
        if (*(c + i) <= 31 || *(c + i) >= 127)
            ft_putchar('.');
        else
            ft_putchar(*(c + i));
    }
}

void    *ft_print_memory(void *addr, unsigned int size)
{
    unsigned    int    i;
    unsigned    char    *c;
    unsigned    int sendsize;

    i = 0;
    c = addr;
    while (i * 16 < size)
    {
        if (i < size /16)
            sendsize = 16;
        else
            sendsize = size % 16;
        ft_print_addr((unsigned long long)c + (i * 16));
        ft_putchar(':');
        ft_print_string(c + (i * 16), sendsize);
        ft_putchar('\n');
        i++;
    }
    return (addr);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(void)
{
    char    str[] = "BonPasajes en Portrjour les mises\nasdw21323asdasdasdasdasdasasdsadlskfjaljfalsdlfsçdfjdl|\tdfsdfsdf:";
    ft_print_memory(str, ft_strlen(str));
    return (0);
}
