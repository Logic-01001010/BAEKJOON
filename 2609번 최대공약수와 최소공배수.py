def gcd(p, q):

	if q == 0:
		return p
	else:
		return gcd(q, p % q)

def lcm(a, b):

	return int(a * b / gcd(a, b))

a, b = map(int, input().split())

g = gcd(a, b)
l = lcm(a, b)

print( g )
print( l )

