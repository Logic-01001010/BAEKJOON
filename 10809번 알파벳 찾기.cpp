#include <iostream>
#include <string.h>
using namespace std;


// 1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

int alpha[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

void findStr(char str[100]){
	
	// 
	// b a e k j o o n
	//             ^
	
	for(int i=strlen(str)-1; i>=0; i--)
	{
		alpha[ str[i] - 'a' ] = i;
	}
	

	
	for(int i=0; i<26; i++)
	{
		
		printf("%d ", alpha[i]);
	}
	
}

int main()
{
	
	char s[100];
	
	scanf("%s", s);
	
	
	findStr(s);

	
	return 0;
}
