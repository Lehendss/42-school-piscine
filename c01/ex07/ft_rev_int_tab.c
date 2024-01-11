void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int last;
    int swap;

    i = -1;
    last = size - 1;
    while (++i < size / 2)
    {
        swap = tab[i];
        tab[i] = tab[last];
        tab[last] = swap;
        last--;
    }
}
/*
#include <stdio.h>
int main(void)
{
    int tab[] = {0, 1, 2, 3};
    int size;

    size = sizeof(tab) / (sizeof(tab[0]));
    
    printf("Before: ");
    for(int i = 0; i < size; i++)
    {
        printf("[%d]", tab[i]);
    }
    printf("\n");

    ft_rev_int_tab(tab, size);
    printf("After: ");
    for(int i = 0; i < size; i++)
    {
        printf("[%d]", tab[i]);
    }
    printf("\n");
    return (0);
}*/
