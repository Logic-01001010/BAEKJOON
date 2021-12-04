N = int(input())

arr = []
for _ in range(N):
	s = input()
	
	arr.append( [ len(s), s ] )
	

arr.sort(key=lambda x: (x[1]) )
arr.sort(key=lambda x: (x[0]) )

tmp = []

for i in arr:
	if i[1] not in tmp:
		tmp.append( i[1] )

	
for i in tmp:
	print(i)
	