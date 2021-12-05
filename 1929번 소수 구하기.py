import math

def is_prime_num(n):
	
	if n == 1:
		return False
	else:
		for i in range(2, int(math.sqrt(n))+1):
			if n % i == 0:
				return False

		return True


	
M, N = map(int, input().split())

for i in range(M, N+1):
    if is_prime_num(i):
        print(i)
		