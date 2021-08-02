#include <iostream>

using namespace std;


int sosu(int n)
{
	int count = 0;
	
	for(int i=2; i<=n; i++)
	{
		if( n % i == 0 )
			count++;	
	}
	
	

	if(count == 1)
	{
		return n;
	}
		return -1;
}

int main(void)
{
	int M, N;
	int result = 0;
	int min = 0;
	int sum = 0;
	int toggle = true;
	
	cin>>M;
	cin>>N;

	
	for(int i=M; i<=N; i++)
	{
		result = sosu( i );
		
		if(result != -1)
		{
			if( toggle )
			{
				min = result;
				toggle = false;
			}
			
			sum += result;
		}
	}
	
	if(min)
		cout<<sum<<endl<<min;
	else
		cout<<"-1";
	return 0;
}
