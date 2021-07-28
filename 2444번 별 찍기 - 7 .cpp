#include <iostream>


using namespace std;


int main(void)
{
	
	int N=0;
	
	scanf("%d", &N);
	
	for(int i=0; i<N-1; i++)
	{
		
		for(int j=N-1; j>i; j--)
		{
			printf(" ");
		}
		
		for(int k=0; k<2*i+1; k++)
		{
			printf("*");
		}
		
		printf("\n");
		
	}
	for(int i=0; i<N; i++)
	{
		
		for(int j=0; j<i; j++)
		{
			printf(" ");
		}
		
		for(int k=0; k<=(2*N)-i*2-2; k++)
		{
			printf("*");
		}
		
		printf("\n");
		
	}	

	return 0;	
}
