/*
** main.c for  in /home/romain.pillot/gnl
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Tue Nov 21 23:58:30 2017 romain pillot
** Last update Wed Nov 22 00:44:22 2017 romain pillot
*/

#include <stdlib.h>
#include <stdio.h>
#include "gnl.h"

int	main(int ac, char **args)
{
  char	*str;

  while ((str = get_next_line(0))) {
    printf("got %s\n", str);
    free(str);
  }
  return (EXIT_SUCCESS);
}
