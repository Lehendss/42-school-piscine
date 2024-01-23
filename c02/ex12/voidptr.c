#include <stdio.h>

int main(void)
{
    void    *ptr;

    int x = 5;
    char    a = 'A';
    
    ptr = &x;
    printf("%d\n", *((int *)ptr));
    ptr = &a;
    printf("%c\n", *((char *)ptr));
}
