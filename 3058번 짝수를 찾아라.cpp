#include <iostream>


using namespace std;

void even(int num[7])
{
	
	int sum=0;
	
	int min=999;	

	for(int i=0; i<7; i++)
	{
			
		if(num[i]%2==0)
		{
			if(min > num[i])
				min = num[i];
			sum+=num[i];
		}
		
	}
	
	printf("%d %d\n", sum, min);	
	
}

int main(void)
{

	int T;
	
	int num[7];
	
	
	cin>>T;
	
	for(int i=0; i<T; i++)
	{
		
		for(int j=0; j<7; j++)
		{
			cin>>num[j];
		}
		
		even(num);
		
	}

	return 0;	
}
