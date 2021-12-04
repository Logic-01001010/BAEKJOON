arr = input().split('-')

sum = 0

for i in arr[0].split('+'):
	sum += int(i)
	
for j in arr[1:]:
	for x in j.split('+'):
		sum -= int(x)

	
print(sum)