N = int( input() )

books = {}

for _ in range(N):
	book = input()
	
	if book in books:
		books[book] += 1
	else:
		books[book] = 1

books = sorted( books.items(), key=lambda x: x[0] ) # 팔린 책이 여러 개일 경우에는 사전 순으로 가장 앞서는 제목을 출력한다.
books = sorted( books, key=lambda x: x[1], reverse=True )

print(books[0][0])