#include <iostream>
#include <string>

using namespace std;


int main(void)
{
	
	string str;
	
	while(true)
	{
	
	getline(cin, str);
	
	if( str == "" )
		break;
	else
		cout<<str<<endl;
	
	}
	

	return 0;	
}
