#include <iostream>
using namespace std;


int factorial(int n)
{
	if( n <= 0 )
		return 1;
	else
		return n * factorial( n- 1 );
	
	
}

int main(void)
{
	int input;

	cin>>input;
	
	int result = factorial(input);
	
	cout<<result<<endl;

    return 0;
}
