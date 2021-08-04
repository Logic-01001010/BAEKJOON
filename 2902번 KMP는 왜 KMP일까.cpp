#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(void)
{
	
	string str;
	vector<char> result;
	
	getline(cin, str);
	
	for(int i=0; i<str.size(); i++)
	{
		if( str[i] >= 'A' && str[i] <= 'Z' )
			result.push_back(str[i]);
		
	}

	
	for(int i=0; i<result.size(); i++)
	{
		cout<<result[i];
	}
	

	return 0;	
}
