#include <iostream>


using namespace std;


int euclid(int p, int q)
{
	if( q == 0 )
		return p;
	
	return euclid( q, p % q );
	
}

int main(void)
{
	int a, b, g, l, T;
	
	scanf("%d", &T);
	
	for(int i=1; i<=T; i++)
	{
	
		scanf("%d", &a);
		scanf("%d", &b);
		
		g = euclid(a, b);
		
		l = ( a * b ) / g;
		
		printf("%d %d\n", l, g);
	
	}
	
	return 0;	
}
