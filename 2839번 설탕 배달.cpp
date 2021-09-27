#include <iostream>
using namespace std;

int main(void)
{
	
	int Nkg;
	int count = 0;
	int kg = 0;
	cin>>Nkg;
	
	while( Nkg > 0 )
	{	
		
		if( Nkg % 5 == 0 )
		{
			Nkg -= 5;
			count++;
		}
		
		else if( Nkg % 3 == 0 )
		{
			Nkg -= 3;
			count++;
		}
		
		else if( Nkg > 5 )
		{
			Nkg -= 5;
			count++;
		}
		else{
			count = -1;
			break;
		}

	}
	
	cout<<count;
	
	
	return 0;
}
