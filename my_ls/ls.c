/*
** ls.c for  in /home/soumph_s/my_ls
** 
** Made by sirininh soumpholphakdy
** Login   <soumph_s@epitech.net>
** 
** Started on  Thu Nov 27 16:20:10 2014 sirininh soumpholphakdy
** Last update Thu Nov 27 16:49:07 2014 sirininh soumpholphakdy
*/

#include <stdio.h>
#include <dirent.h>

int	main()
{
  DIR *dirp;
  struct dirent *entry;

  if ((dirp = opendir('.')) == NULL)
    {
      fprintf(stderr. '[CAMARCHEPASBATARD]: opendir problem\n');
      return (1);
    }
