#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


int main(void)
{
	
	char str[100];
	
	scanf("%s", str);
	
	int count = 0;
	
	for(int i=0; i<strlen(str); i++)
	{

	
		if(str[i]=='c')
		{
		
			if(str[i+1]=='=' || str[i+1]=='-')
			{
				count++;
				i++;
				continue;
			}
		}
	
		else if(str[i] == 'd')
		{

			if(str[i+1] == 'z')
			{
				if(str[i+2] == '=')
				{
					count++;
					i+=2;
					continue;
				}
			}
			else if(str[i+1] == '-')
			{
				count++;
				i++;
				continue;
			}
		}
		
		else if(str[i] == 'l')
		{
		
			if(str[i+1] == 'j')
			{
				count++;
				i++;
				continue;				
			}
		}
		
		else if(str[i] == 'n')
		{
		
			if(str[i+1] == 'j')
			{
				count++;
				i++;
				continue;
			}
		}
		
		else if(str[i] == 's')
		{
		
			if(str[i+1] == '=')
			{
				count++;
				i++;
				continue;
			}
		}
		else if(str[i] == 'z')
		{
		
			if(str[i+1] == '=')
			{
				count++;
				i++;
				continue;
			}
		}

		count++;
	
				
		
	}
	
	
	printf("%d", count);

	
}
