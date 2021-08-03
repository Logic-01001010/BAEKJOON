#include <iostream>

using namespace std;



int main(void)
{
	int N;
	int arr[10001];
	int combo=0;
	int sum=0;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++)
	{
		scanf("%d", &arr[i]);
		
		if(arr[i] == 1)
		{
			combo++;
			sum+=combo;
		}
		else if(arr[i] == 0)
			combo=0;
	}
	
	cout<<sum<<endl;
	
	return 0;	
}
