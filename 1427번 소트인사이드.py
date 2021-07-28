N = input()

li = []

for i in range(len(N)):

	li.append(N[i])


for i in range(len(N)):

	for j in range(i, len(N)):

		if li[i] < li[j]:

			tmp = li[i]
			li[i] = li[j]
			li[j] = tmp

print("".join(li))