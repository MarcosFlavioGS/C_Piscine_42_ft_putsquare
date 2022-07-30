#include <stdlib.h>

void squarer(int x, int y);

int main(int argc, char **argv)
{
  if (argc > 1)
  {
    squarer(atoi(argv[1]), atoi(argv[2]));
  }
  return (0);
}
