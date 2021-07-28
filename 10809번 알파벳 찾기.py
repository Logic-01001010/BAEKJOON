
alpha = [-1] * 26

def findStr(str):


	for i in range(len(str)-1, -1, -1):
		alpha[ ord(str[i]) - ord('a') ] = i


	for i in range(0, 26):
		print(alpha[i],"", end='')

if __name__ == '__main__':

	s = input()

	findStr(s)