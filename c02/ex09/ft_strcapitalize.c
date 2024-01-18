char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if ((str[i - 1] < 47) && ((str[i] >= 'a') && (str[i] <= 'z')))
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    str1[] = "ola, tudo bem? 42palavras guarenta-e-duas; cinquenta+e+um";

    printf("%s\n", ft_strcapitalize(str1));

}*/
