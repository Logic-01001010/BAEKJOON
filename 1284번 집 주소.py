size = 0

while True:

	N = input()

	if N == '0':
		break

	size = len(N) - 1 + 2 # 숫자들 간격

	for i in range(len(N)):

		if N[i] == '1':
			size += 2

		elif N[i] == '0':
			size += 4

		else:
			size += 3

	print(size)