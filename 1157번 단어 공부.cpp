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
		
		// ���� �빮�ڷ� ���� ��Ű�� 
		if(S[i]>='a')
			S[i]=S[i] - 'a' + 'A';
			
		count[ S[i] - 'A' ]++;
		
	}
	

	
	// �ִ� �󵵼� ���ϱ� 
	for(int i=0; i<26; i++)
	{
		if(max < count[i])
		{
			max = count[i];
			idx = i;
		}
	}
	

	// �ߺ� üũ 
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
