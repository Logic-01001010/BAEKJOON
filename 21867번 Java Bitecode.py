N = int(input())


Source = input()

if len(Source.replace('J','').replace('A','').replace('V','')) == 0:
	print('nojava')
else:
	print(Source.replace('J','').replace('A','').replace('V',''))