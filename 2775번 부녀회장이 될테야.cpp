#include <iostream>

int main(void)
{
	int apt[15][14] = {0,};
	int sum=0;
	
	for(int i=0; i<14; i++)
		apt[0][i] = i+1;
	
	
	for(int i=1; i<15; i++)
	{
		for(int j=0; j<14; j++)
		{
			sum=0;
			for(int k=0; k<=j; k++)
			{
			sum += apt[i-1][k];
			}
			apt[i][j] = sum;
			
		}
	}
	

	int T, k, n;
	
	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		scanf("%d", &k);
		scanf("%d", &n);
		
		printf("%d\n", apt[k][n-1]);
		
	}
	
}
