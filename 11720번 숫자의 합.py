
sum=0

def calc(count, str):

	global sum


	for i in range(0, int(count)):
		sum += ord(str[i]) - ord('0')

if __name__ == '__main__':

	count = input()

	str = input()


	calc(count, str)


	print(sum)