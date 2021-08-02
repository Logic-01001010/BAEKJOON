#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int arr[100001];

void binsearch(int target, int begin, int end)
{
	int mid;
	
	while( begin <= end )
	{

		mid = (begin + end) / 2;

		if(arr[mid] == target)
		{
			printf("1\n");
			return ;
		}
		
		else if( arr[mid] > target )
			end = mid -1;

		else
			begin = mid + 1;

	}

	printf("0\n");
	return ;

}


int main(void)
{
	int N, M, tmp;
	
	scanf("%d", &N);

	for(int i=0; i<N; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(arr, arr+N);

	scanf("%d", &M);

	for(int i=0; i<M; i++)
	{
		scanf("%d", &tmp);
		binsearch(tmp, 0, N);
	}

	return 0;	
}
