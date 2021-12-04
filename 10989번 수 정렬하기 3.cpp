#include <iostream>

using namespace std;

int main(void){
	
	int T = 0;
	int arr[10001] = {0,};
	
	scanf("%d", &T);
	
	for(int i=0; i<T; i++ ){
		int tmp;
		scanf("%d", &tmp);
		arr[tmp]++;
	}
	
	for(int i=0; i<10001; i++){
		for(int j=0; j<arr[i]; j++)
			printf("%d\n", i);
	}
	
	return 0;
}
