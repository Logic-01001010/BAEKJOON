a, b = map(int, input().split())

arr = [0,]
for i in range(1, 1001):
	for j in range(i):
		arr.append( i )

sum = 0
for j in range(a, b+1):
	sum += arr[j] 
	
print(sum)