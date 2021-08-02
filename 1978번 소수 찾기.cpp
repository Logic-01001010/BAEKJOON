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
		return n;

	return -1;
}

int main(void)
{
	int N;
	int result = 0;
	int arr[100];
	int count = 0;
	
	cin>>N;
	
	for(int i=0; i<N; i++)
	{
		
		cin>>arr[i];	
		
	}
	
	
	for(int i=0; i<N; i++)
	{
		result = sosu( arr[i] );
		
		if(result != -1)
			count++;
		
	}
	
	cout<<count;
	
	return 0;
}
