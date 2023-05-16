#include <stdio.h>
int main()
{
  int end, even = 0, odd = 0;
  // fgets(n, sizeof(n), stdin);
  scanf("%d", &end);
  for (int i = 1; i <= end; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d ", i);
    }
  }
  for (int i = end; i >= end; i++)
  {
    if (i % 2 == 0)
    {
      continue;
      printf("%d ", i);
    }
  }

  // puts(n);
  return 0;
}