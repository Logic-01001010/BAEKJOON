blank = 0

str = input()

size = len(str)

if str[size-1] == ' ':
	blank -= 1
if str[0] == ' ':
	blank -= 1

for i in range(size):
	if str[i] == ' ':
		blank+=1

print(blank+1)