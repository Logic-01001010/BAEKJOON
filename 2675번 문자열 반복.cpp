#include <iostream>
#include <string.h>
using namespace std;


void repeatStr(int R, char S[100]){
	
	for(int i=0; i<strlen(S); i++)
	{
		for(int j=0; j<R; j++)
		{
			cout<<S[i];
		}
	}
	cout<<endl;
}

int main()
{
	
	int R, T;
	char S[100];
	
	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		scanf("%d", &R);
		
		cin>>S;
	
		repeatStr(R, S);
	}
	return 0;
}
