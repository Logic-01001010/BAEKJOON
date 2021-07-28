#include <iostream>


using namespace std;


void BigThird(int arr[10])
{
	
	int max = 0;
	
	for(int loop=0; loop<3; loop++)
	{
	
	
		for(int i=0; i<10; i++)
		{
			if( arr[i] > max)
				max = arr[i];	
		}
		
		for(int i=0; i<10; i++)
		{
			if( arr[i] == max)
				arr[i] = -999;
			
		}
		
		if(loop < 2)
			max = 0;
		
	}

	printf("%d\n", max);
	
}

int main(void)
{

	int T;
	int n;
	int arr[10];
	
	cin>>T;
	
	while(T--)
	{
		
		for(int i=0; i<10; i++)
		{
			cin>>n;
			arr[i]=n;
		}
		
		BigThird(arr);
		
	}


	return 0;	
}
