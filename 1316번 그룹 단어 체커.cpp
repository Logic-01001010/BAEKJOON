#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


int isGroupWord(char str[100])
{

	
	// aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.
	

	for(int i=0; i<strlen(str); i++)
	{
		
		// ������ �ٸ� ������ ��쿡 
		if(str[i] != str[i+1])
		{
			
			// �� �ѷ�����. 
			for(int j=i+1; j<strlen(str); j++)
			{
				if(str[i] == str[j])
				{
					return 0; // �׷� ���ڰ� �ƴ�. 
				}
			}
		
		}
	}


	return 1; // �׷� ������. 
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
