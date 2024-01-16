#include <unistd.h>
#include "ft_stock_str.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void   ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void    ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nbr < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nbr  > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + 48);
}

void    ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par[i].str)
    {
        ft_putstr(par[i].str);
        ft_putchar("\n");
        ft_putnbr(par[i].size);
        ft_putchar("\n");
        ft_putstr(part[i].copy);
        i++;
    }
}
