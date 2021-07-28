#include <iostream>
#include <string.h>
#include <stdlib.h>


using namespace std;

void callTime(char str[100])
{
	
	int size = strlen(str);
	
	int time(0);
	
	for(int i=0; i<size; i++)
	{
		switch(str[i])
		{
			case 'A':
			case 'B':
			case 'C':
				time+=2;
			break;
			
			case 'D':
			case 'E':
			case 'F':
				time+=3;
			break;
			
			case 'G':
			case 'H':
			case 'I':
				time+=4;
			break;
			
			
			case 'J':
			case 'K':
			case 'L':
				time+=5;
			break;		
				
			case 'M':
			case 'N':
			case 'O':
				time+=6;
			break;						

			case 'P':
			case 'Q':
			case 'R':
			case 'S':
				time+=7;
			break;	

			case 'T':
			case 'U':
			case 'V':
				time+=8;
			break;	
			
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				time+=9;
			break;	

		}
	}
	
	time += size;
	
	printf("%d", time);
	
	
}

int main(void)
{
	
	char str[100];
	
	scanf("%s", str);
	
	callTime(str);

	
}
