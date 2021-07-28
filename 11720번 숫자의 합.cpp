#include <iostream>
using namespace std;




int sum=0;


void calc(int count, char n[100])
{
	for(int i=0; i<count; i++){
		sum += (n[i]-'0');
	}
}

int main()
{
	

	
	int count = 0;
	char str[100];
	
	scanf("%d", &count);
	
	scanf("%s", str);
	
	calc(count, str);

	cout<<sum;
	
	return 0;
}
