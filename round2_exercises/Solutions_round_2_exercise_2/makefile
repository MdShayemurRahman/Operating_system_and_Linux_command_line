
output: main.o Message.o
	g++ main.o Message.o -o output

main.o: main.cpp
	g++ -c main.cpp

addition.o: Message.cpp Message.h
	g++ -c Message.cpp

clean:
	rm *.o output