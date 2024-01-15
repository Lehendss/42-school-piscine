#include "ft_point.h"

void    set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

#include <stdio.h>

int main(void)
{
    t_point point;
    
    printf("Before: ");
    printf("X: %d\n", x);
    printf("Y: %d\n", y);

    set_point(&point);
    return (0);
}
