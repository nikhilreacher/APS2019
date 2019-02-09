#include <stdio.h>
#include<string.h>

int max(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int main()
{
	int n,m;
	char str[] = "nikhil";
	char seq[] = "khi";
	n = strlen(str);
	m = strlen(seq);
	
	int arr[m+1][n+1];
	for (int i = 0; i < m+1; ++i)
	{
		arr[i][0] = 0;
	}
	for (int i = 0; i < n+1; ++i)
	{
		arr[0][i] = 0;
	}
	for (int i = 1; i < m+1; i++)
	{
		for (int j = 1; j < n+1; j++)
		{
			if(str[j] == seq[i])
			{
				arr[i][j] = arr[i-1][j-1] + 1;
			}
			else
			{
				arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
			}
		}
	}
	for(int i = 0;i<m+1;i++)
	{
		for(int j=0;j<n+1;j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
	printf("%d\n", arr[m][n]);

	return 0;
}