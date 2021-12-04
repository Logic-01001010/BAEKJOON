N, K = map(int, input().split())
	
coins = []
count = 0
for _ in range(N):
	coins.append( int( input() ) )

idx = len( coins ) - 1
	
while K > 0:

	if ( K - coins[idx] ) >= 0 :
		count += 1
		K -= coins[idx]
		idx = len(coins) - 1
		continue
		
	idx -= 1

		
print( count )
