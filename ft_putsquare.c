#include <unistd.h>

void squarer(int x, int y);
void ft_putchar(char c);
void std_square(int x, int y, char a, char b, char c);
void liner(int x, char a, char b);
void colum(int y, char a, char b, char c);

void squarer(int x, int y)
{
  if (x > 0 && y > 0)
  {
    if (x == 1 && y == 1)
    {
      ft_putchar('A');
      ft_putchar('\n');
    }
    if (x != 1 && y != 1)
    {
      std_square(x, y, 'A', 'B', 'C');
    }
    if (x == 1 && y != 1)
    {
      colum(y, 'A', 'B', 'C');
    }
    if (y == 1 && x != 1)
    {
      liner(x, 'A', 'B');
    }
  }
  else
  {
    return ;
  }
}

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void std_square(int x, int y, char a, char b, char c)
{
  int k;

  k = 2;
  liner(x, a, b);
  while (k < y)
  {
    liner(x, b, ' ');
    k ++;
  }
  liner(x, c, b);
}

void liner(int x, char a, char b)
{
  int i;

  i = 1;
  while (i <= x)
  {
    if (i == 1)
    {
      ft_putchar(a);
      i += 1;
    }
    if (i == x)
    {
      ft_putchar(a);
      ft_putchar('\n');
      i += 1;
    }
    else
    {
      ft_putchar(b);
      i += 1;
    }
  }
}

void colum(int y, char a, char b, char c)
{
  int j;

  j = 2;
  ft_putchar(a);
  ft_putchar('\n');
  while (j < y)
  {
    ft_putchar(b);
    ft_putchar('\n');
    j += 1;
  }
  ft_putchar(c);
  ft_putchar('\n');
  j += 1;
}
