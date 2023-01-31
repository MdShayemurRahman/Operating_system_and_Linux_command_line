
output: main.o Message.o
	g++ main.o Message.o -o args

main.o: main.cpp
	g++ -c main.cpp

addition.o: Message.cpp Message.h
	g++ -c Message.cpp

clean:
	rm *.o args