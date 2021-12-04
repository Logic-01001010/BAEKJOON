T = input()
arr = list( map( int, input().split() ) ) 

arr.sort()

tmp = 0
min = 0
for i in arr:
	tmp += i
	min += tmp
print(min)