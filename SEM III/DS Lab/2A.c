#include<stdio.h>

int main()
{
	int m, n, p, q;
	
	printf("Enter the number of rows and column of First Matrix: ");
	scanf("%d %d", &m, &n);

	printf("Enter the number of rows and column of Second Matrix: ");
	scanf("%d %d", &p, &q);
	
	if (m != q)
	{
		printf("Not possible to multiply matrices.\n");
		return 0;
	}
	
	int farr[m][n], sarr[p][q], result[m][q];
	
	printf("Enter the elements of First Matrix: ");
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
			scanf("%d", &farr[i][j]);
	}		
	
	printf("Enter the elements of Second Matrix: ");
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
			scanf("%d", &sarr[i][j]);
	}		
	
	for (int i = 0; i<m;i++)
	{
		for (int j = 0; j<q; j++)
		{
			result[i][j] = 0;
			for (int k = 0; k<n; k++)
				result[i][j] += farr[i][k] * sarr[k][j];	
		}
	}
	
	printf("The multiplication of two matrix is: ");
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<q; j++)
			printf("%d ", result[i][j]);
		printf("\n");
	}
	return 0;
}
