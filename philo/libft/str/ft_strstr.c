#include "../libft.h"

int ft_strstr(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i])
    {
        while (s1[i + j] == s2[j])
            j++;
        if (j && s2[j - 1] == '\0')
            return (1);
        j = 0;
        i++;
    }
    return(0);
}