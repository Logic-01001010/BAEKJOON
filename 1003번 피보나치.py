if __name__ == '__main__':

	P = list(range(41))
	P[0] = 0
	P[1] = 1

	for i in range(2, 41):
		P[i] = P[i-2] + P[i-1]


	T = int(input())

	for count in range(T):

		N = int(input())

		if N == 0:
			print("1 0")
		else:
			print(P[N-1], P[N])
