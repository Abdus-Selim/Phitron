#include <stdio.h>

int main()
{
  int m, n, c, d, mat1[10][10], mat2[10][10], sum_mat[10][10];

  scanf("%d%d", &m, &n);

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &mat1[c][d]);

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &mat2[c][d]);

  for (c = 0; c < m; c++)
  {
    for (d = 0; d < n; d++)
    {
      sum_mat[c][d] = mat1[c][d] + mat2[c][d];
      printf("%d ", sum_mat[c][d]);
    }
    printf("\n");
  }

  return 0;
}