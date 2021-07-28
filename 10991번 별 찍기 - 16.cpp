#include <iostream>


using namespace std;


int main(void)
{
	int N;
	
	cin>>N;
	
	for(int i=0; i<N; i++)
	{
		for(int j=N-1-i; j>0; j--)
		{
			printf(" ");
		}
		
		for(int k=0; k<=2*i; k++)
		{
			if((k+1)%2==0)
				printf(" ");
			else
			printf("*");
		}
			
		printf("\n");
	}

	return 0;	
}
