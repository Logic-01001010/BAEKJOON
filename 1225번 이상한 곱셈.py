a, b = input().split()

result = 0

for i in range(len(a)):

	for j in range(len(b)):

		result = result + int(a[i]) * int(b[j])

print(result)