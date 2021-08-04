aeiou = [ 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' ]
count = 0
while True:

	S = input()

	if S == '#':
		break

	for i in S:

		if i in aeiou:
			count += 1

	print(count)
	count = 0
