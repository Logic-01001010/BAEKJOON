a, b = input().split()

print(int(a)+int(b))


"""
8888888b.  888                                     888 888 888 
888   Y88b 888                                     888 888 888 
888    888 888                                     888 888 888 
888   d88P 888  .d88b.   8888b.  .d8888b   .d88b.  888 888 888 
8888888P"  888 d8P  Y8b     "88b 88K      d8P  Y8b 888 888 888 
888        888 88888888 .d888888 "Y8888b. 88888888 Y8P Y8P Y8P 
888        888 Y8b.     888  888      X88 Y8b.      "   "   "  
888        888  "Y8888  "Y888888  88888P'  "Y8888  888 888 888 
                                                               

런타임 에러좀 안뜨게 해줘 제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!제발!

"""


"""


a, b = input().split()


reverseA=[]
reverseB=[]
BigSum=0


for i in range(len(a)):
	reverseA.append(a[len(a)-i-1])
for i in range(len(b)):
	reverseB.append(b[len(b)-i-1])




for i in range(len(reverseA)):


	add = int(reverseA[i]) + int(reverseB[i])
	add = int(add)

	if add >= 10: # carry 발생
		BigSum += round((add%100 - add%10) * .1) * 10**(i+1)
		
		BigSum += add%10 * (10**i)


	else:
		BigSum += add * (10**i)


print(BigSum, end='')
"""