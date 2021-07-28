#include <iostream>


using namespace std;



int main(void)
{

	int N, input, space[101]={0, };
	int denial=0;
	
	cin>>N;
	
	for(int i=0; i<N; i++)
	{
		
		cin>>input;
		
		if(++space[input] != 1)
			denial++;
		
	}

	printf("%d", denial);
	
	return 0;	
}
