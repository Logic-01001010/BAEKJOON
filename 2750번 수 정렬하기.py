N = int(input())

element = []

for i in range(N):

	element.append(int(input()))


for i in range(N):

	for j in range(i, N):

		if(element[i] > element[j]):

			tmp = element[i]
			element[i] = element[j]
			element[j] = tmp


for i in range(N):
	print(element[i])