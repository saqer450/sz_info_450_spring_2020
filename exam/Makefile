default: accounts

savings.o: 
	g++ -c savings.cpp
checking.o:
	g++ -c checking.cpp
creditcard.o:
	g++ -c creditcard.cpp

account.o:
	g++ -c account.cpp

accounts: savings.o checking.o creditcard.o account.o
	g++ -o accounts main.cpp savings.o checking.o creditcard.o account.o

clean:
	rm -f *.o accounts
