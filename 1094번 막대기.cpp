#include <iostream>


using namespace std;


int main(void)
{
	
	int stick = 64;
	int X;
	int count=0;
	
	scanf("%d", &X);
	

	
	while( 0 < X )
	{
		
		if( stick > X )
		{    
			stick /= 2;
		}
		else
		{ 
			count++;
			X-=stick;
		}

		
		
	}
	
	
	printf("%d", count);

	return 0;	
}
