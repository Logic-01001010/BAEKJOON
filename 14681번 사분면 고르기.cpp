#include <iostream>

int main(void)
{
	int a, b, result;
	
	scanf("%d %d", &a, &b);
	
	result = (a>0)?((b>0)?1:4):((b>0)?2:3);

	printf("%d", result);
}
