#include <iostream>
using namespace std;



int main()
{
	
	int n;
	int before = 0, after = 1, tmp;
	int result = 0;
	
	cin>>n;

	for(int i=0; i<=n; i++)
	{
		result = before;
		
		tmp = before + after;
		before = after;
		after = tmp;
	}
	
	cout<<result;
	
	return 0;
}
