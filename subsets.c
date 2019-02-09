#include<stdio.h>
#include<math.h>

int main()
{
	char d[] = {'a','b','c'};
	int n = 3;
	int m = pow(2,n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			if(i & (1<<j))
				printf("%c", d[j]);
	}
	printf("\n");
	
}