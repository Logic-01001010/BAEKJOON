#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int N;
	char str[10001];
	int score = 0;
	
	cin>>N;
	cin>>str;
	
	for(int i=0; i<N; i++)
	{
		score += str[i] - 'A' + 1;
	}

	cout<<score;

	return 0;
}
