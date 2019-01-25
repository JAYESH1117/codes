#include<stdio.h>
int main()
{  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
  printf("Enter the number of rows and columns\n:");
 

  scanf("%d%d", &m, &n);
  printf("Enter the values of the matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
 printf("Enter the number of rows and columns of the second matrix\n:");
  scanf("%d%d", &p, &q);
 printf("");
  if (n != p)
    printf("-1");
  else
  {
    printf("Enter the values of the second matrix:\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) 
	{
      for (d = 0; d < q; d++)
	   {
        for (k = 0; k < p; k++)
		 {
          sum = sum + first[c][k]*second[k][d];
         }
 
        multiply[c][d] = sum;
        sum = 0;
       }
    }
 
    printf("After the multiplication of the two matrix the result is:\n");
 
    for (c = 0; c < m; c++) 
	{
      for (d = 0; d < q; d++)
      {
        printf("%d ", multiply[c][d]);
      }
 
      printf("\n");
    }
      return 0;}
  }

