#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string str;
	char dic[] = {'a', 'e', 'i', 'o', 'u'};
	int total = 0;
	
	
	cin>>str;
	
	
	for(int i=0; i<str.size(); i++)
	{
		
		for(int j=0; j<sizeof(dic); j++)
		{
			if( str[i] == dic[j] )
				total++;
		}
		
	}

	cout<<total;
	
	return 0;
}
