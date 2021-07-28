#include <iostream>


using namespace std;


int main(void)
{
	
	int N=0;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++)
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


	return 0;	
}
