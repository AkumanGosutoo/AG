#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main()
{
  int	fd;
  
  fd = open("test", O_RDONLY);

  return (0);
}
