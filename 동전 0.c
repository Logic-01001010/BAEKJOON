#include <stdio.h>

int main(void)
{
	int N, K, arr[101];
	
	scanf("%d %d", &N, &K);
	
	int i=0;
	
	for(i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	int count = 0;
	for(i=N-1; i>=0; i--){
		if( K / arr[i] >= 0 ){
			count += K / arr[i];
			K %= arr[i];
		}
	}
	
	printf("%d", count);
	
	return 0;
}
