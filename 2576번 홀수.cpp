#include <iostream>


using namespace std;

int main(void)
{
	int arr[7];
	int min = 9999;
	int sum = 0;
	
	int exist_odd = false;
	
	for(int i=0; i<7; i++)
	{
		scanf("%d", &arr[i]);
		
		if( (arr[i] % 2 == 1) )
		{
			
			exist_odd = true;
			
			sum += arr[i];
			
			if( min > arr[i] )
				min = arr[i];
			
		}
		
	}
	
	if( exist_odd )
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	else
		printf("-1");
	
	return 0;
}
