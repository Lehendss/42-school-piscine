void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int swap;

    i = 0;
    while (i < size -1)
    {
        if (tab[i] > tab[i + 1])
        {
            swap = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = swap;
            i = 0;
        }
        else
            i++;
    }
}
/*
#include <stdio.h>
int main(void)
{
    int tab[] = {3, 2, 2, 1, 0};
    int size;

    size = sizeof(tab) / (sizeof(tab[0]));
    
    printf("Before: ");
    for(int i = 0; i < size; i++)
    {
        printf("[%d]", tab[i]);
    }
    printf("\n");

    ft_sort_int_tab(tab, size);
    printf("After: ");
    for(int i = 0; i < size; i++)
    {
        printf("[%d]", tab[i]);
    }
    printf("\n");
    return (0);
}*/
