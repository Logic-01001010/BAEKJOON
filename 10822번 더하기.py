S = input()

S = S.split(',')

total = 0

for i in S:
	total += int(i)

print(total)