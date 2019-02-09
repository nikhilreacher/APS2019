#include<stdio.h>

int max(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int main()
{
	int n,w;
	scanf("%d",&n);
	int weight[n],value[n];
	for(int i=0;i<n;i++)
		scanf("%d %d",&weight[i],&value[i]);
	scanf("%d",&w);
	int grid[n+1][w+1];
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < w+1; j++)
		{
			/* code */
			grid[i][j] = 0;
		}
		
	}

	for (int i = 1; i < n+1; i++)
	{
		for(int j=1;j<w+1;j++)
		{
			if(j-weight[i] < 0)
				grid[i][j] = grid[i-1][j];
			else{
				grid[i][j] = max(grid[i-1][j],grid[i-1][j-weight[i-1]]+value[i-1]);
				//printf("%d\n", grid[i][j]);
			}

		}
	}
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < w+1; j++)
		{
			printf("%d ", grid[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\t%d",weight[i],value[i]);
	}
	//printf("%d\n", max(grid[2-1][1],grid[2-1][1-weight[2-1]]+value[2-1]));
	return 0;
}