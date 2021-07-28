#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


int main(void)
{
	
	int N;
	cin>>N;
	
	
	string str;
	cin>>str;
	
	
	string output = str; 
	
	for(int i=1; i<N; i++)
	{
		
		string tmp;
		cin>>tmp;
		
		for(int j=0; j<tmp.length(); j++)
		{
			if(str[j] != tmp[j])
				output[j] = '?';	
		}
		
		
	}
	
	cout<<output<<endl;
	

	return 0;	
}
