
def printBin(n):

	if( n < 2 ):
		print(n, end='')
	else:
		printBin( n // 2 )
		print(n % 2, end='')
	


N = int(input())

printBin(N)
	
