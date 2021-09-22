#include <iostream>
using namespace std;

int gcd(int p, int q)
{
	if( q == 0 )
		return p;
	else
		return gcd(q, p % q);
}

int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

int main(void)
{
	int a, b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	int g = gcd(a, b);
	int l = lcm(a, b);
	
	cout<<g<<endl;
	cout<<l<<endl;
	
	return 0;
}
