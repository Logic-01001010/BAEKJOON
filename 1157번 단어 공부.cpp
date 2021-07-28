#include <stdio.h>



int main(void)
{
	
	char S[1000000];
	int size = 0;
	int count[26] = {0,};

	int check = 0, max = 0, idx = 0;

	
	scanf("%s", S);
	
	
	while(S[size] != '\0')
		size++;


	
	for(int i=0; i<size; i++)
	{
		
		// 먼저 대문자로 변경 시키기 
		if(S[i]>='a')
			S[i]=S[i] - 'a' + 'A';
			
		count[ S[i] - 'A' ]++;
		
	}
	

	
	// 최대 빈도수 구하기 
	for(int i=0; i<26; i++)
	{
		if(max < count[i])
		{
			max = count[i];
			idx = i;
		}
	}
	

	// 중복 체크 
	for(int i = 0; i < 26; i++)
	{
		
		if(max == count[i])
			check++;
	
	}


	
	if(check > 1)
		printf("?");
	else	
		printf("%c", 'A'+idx);

	return 0;
}
