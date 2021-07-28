#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


int isGroupWord(char str[100])
{

	
	// aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
	

	for(int i=0; i<strlen(str); i++)
	{
		
		// 옆에께 다른 문자일 경우에 
		if(str[i] != str[i+1])
		{
			
			// 다 둘러본다. 
			for(int j=i+1; j<strlen(str); j++)
			{
				if(str[i] == str[j])
				{
					return 0; // 그룹 문자가 아님. 
				}
			}
		
		}
	}


	return 1; // 그룹 문자임. 
}

int main(void)
{
	int loop = 0;
	
	int count = 0;
	
	char str[100];
	
	
	
	scanf("%d", &loop);
	
	for(int i=0; i<loop; i++)
	{
	
		scanf("%s", str);
		
		count += isGroupWord(str);
		
		
	}
	
	printf("%d", count);
}
