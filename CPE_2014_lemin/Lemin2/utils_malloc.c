#include "utils_malloc.h"

void	* xmalloc(unsigned int size) 
{
  void	*mem = malloc(size);
  
    if (mem == NULL)
    {
      printf("Trop de malloc tue le malloc !\n");
      exit(EXIT_FAILURE);
    }    
    return (mem);
}
