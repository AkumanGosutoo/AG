/*
** str_to_wordtab.c for  in /home/daoud_c/c2
** 
** Made by chihabeeddine daoud
** Login   <daoud_c@epitech.net>
** 
** Started on  Sat Mar  7 12:01:59 2015 chihabeeddine daoud
** Last update Sat Mar  7 12:06:51 2015 chihabeeddine daoud
*/

#include <stdlib.h>
#include <stdio.h>

int	my_count_word(char *str)
{
    int	count;
    int	i;
    
    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        while(str[i++] != ':' && str[i] != '\0');
        count++;
    }
    return(count);
}

int		my_len_to_wordtab(char *str, int p)
{
    int		count;
    
    count = 0;
    while(str[p] != ':' && str[p] != '\0')
    {
        count++;
        p++;
    }
    return(count);
}

char		**str_to_wordtab(char *str)
{
    char		**tab;
    int		i;
    int		j;
    int		k;
    
    i = 5;
    j = 0;
    k = 0;
    tab = malloc((sizeof(*tab) * (my_count_word(str))) + 1);
    while (str[i] != '\0')
    {
        tab[j] = malloc((sizeof(**tab) * (my_len_to_wordtab(str, i) + 1)));
        while (str[i] != ':' && str[i] != '\0')
        {
            tab[j][k] = str[i++];
            k++;
        }
        if(str[i] == ':')
            i++;
        tab[j][k] = '\0';
        j++;
        k = 0;
    }
    tab[j] = '\0';
    return(tab);
}

int main(int ac, char **av)
{
  printf("%s",str_to_wordtab(av[1]));
}
