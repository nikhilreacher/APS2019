#include <stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d",&n);

	int arr[n];
	arr[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		arr[i] = 0;
	}

	for (int i = 0; i < n; i+=3)
	{
		arr[i] = 1;
	}
	int j;
	
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1)
		{
			arr[i+5] = 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1)
		{
			arr[i+10] = 1;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}