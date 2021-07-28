#include <iostream>
#include <string.h>
#include <stdlib.h>


using namespace std;


void compareNum(int A, int B)
{
	char SA[100];
	char SB[100];
	
	char reverseA[100];
	char reverseB[100];
	
	// 정수를 문자열로 
	sprintf(SA, "%d", A);
	sprintf(SB, "%d", B);
	
	
	int sizeA = strlen(SA) - 1;
	int sizeB = strlen(SB) - 1;

	
	for(int i=0; i<=sizeA; i++)
		reverseA[i] = SA[sizeA-i];
	for(int i=0; i<=sizeB; i++)
		reverseB[i] = SB[sizeA-i];
	

	
	int numA = atoi(reverseA);
	int numB = atoi(reverseB);
	
	printf("%d",(numA>numB)?numA:numB);
	
}

int main(void)
{
	int A, B;
	
	scanf("%d", &A);
	scanf("%d", &B);


	compareNum(A, B);

	
}
