#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> list;
	
	int N, K;
	int arr[10001];
	
	scanf("%d", &N);
	scanf("%d", &K);

	for(int i=0; i<=N; i++)
	{
		if( N % (i+1) == 0 )
		{
			list.push_back(i+1);
		}
	}
	
	
	printf("%d", list[K-1]);
	
	return 0;
}
