N, K = map(int, input().split())
	
coins = []
count = 0
idx = 0
for _ in range(N):
	coins.append( int( input() ) )

coins.sort(reverse=True)
size = len(coins)
A = coins[:size//2:]
B = coins[size//2::]

print(A, B)

while K > 0:
	
	if ( K - B[idx] ) >= 0:
		K -= B[idx]
		idx = 0
		count += 1
		
		
	idx += 1

		
print( count )
