#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  char c[25];

  int fd = open("file.txt", O_RDONLY, 0);

  read(fd, &c, 25);

  for (int i = 0; i < sizeof(c); i++)
  {
    printf("%c ", c[i]);
  }
  printf("\n");

  exit(0);
}
