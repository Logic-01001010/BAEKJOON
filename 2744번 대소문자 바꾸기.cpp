#include <iostream>
using namespace std;

int main()
{
	

	char str[10001];
	int i=0;
	
	cin>>str;
	
	while(true)
	{
		if( str[i] == '\0' )
			break;
		
		printf("%c", str[i] ^ 32);	
		
		i++;	
	}


	return 0;
}
