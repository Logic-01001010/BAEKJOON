s = input()

count = 0
oneCount = 0
zeroCount = 0


for i in s.split("0"):
	if "1" in i:
		oneCount += 1
	

for i in s.split("1"):
	if "0" in i:
		zeroCount += 1

if oneCount < zeroCount:
	print(oneCount)
else:
	print(zeroCount)