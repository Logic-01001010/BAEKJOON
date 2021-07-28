#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void)
{
	
	string str;
	
	//scanf("%[^\n]", str);
	getline(cin,str);
	
		
	int size = str.length();

	int blank=0;
	
	if(str[size--] == ' ')
		blank--;
	if(str[0] == ' ')
		blank--;
	
	for(int i=0; i<size; i++)
	{

		if(str[i] == ' ')
		  blank++;
	}
	

	printf("%d", blank+1);

	
	exit(0);
}
