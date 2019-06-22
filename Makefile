
outout: main.o coin.o dealer.o player.o
	g++ main.o coin.o dealer.o player.o -o output

main.o: main.cpp
	g++ -c main.cpp
	
coin.o: coin.cpp coin.h
	g++ -c coin.cpp
	
dealer.o: dealer.cpp dealer.h
	g++ -c dealer.cpp

player.o: player.cpp player.h
	g++ -c player.cpp

clean: 
	rm *.o output