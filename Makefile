CC = g++ -std=c++14
LDFLAGS = -L/usr/include/jsoncpp -ljsoncpp
CFLAGS = -g -I/usr/include/jsoncpp -ljsoncpp

all: 	main
	@echo ""

JvTime.o:	JvTime.cpp JvTime.h
	$(CC) -c JvTime.cpp $(CFLAGS)

GPS.o:		GPS.cpp GPS.h
	$(CC) -c GPS.cpp $(CFLAGS)

Person.o:	Person.cpp Person.h
	$(CC) -c Person.cpp $(CFLAGS)

Thing.o:	Thing.cpp Thing.h
	$(CC) -c Thing.cpp $(CFLAGS)

Record.o:	Record.cpp Record.h
	$(CC) -c Record.cpp $(CFLAGS)

main.o:	main.cpp GPS.h Thing.h Person.h JvTime.h Record.h
	$(CC) -c main.cpp $(CFLAGS)

main:		GPS.o main.o Thing.o Person.o JvTime.o Record.o
	$(CC) main.o GPS.o Thing.o Person.o JvTime.o Record.o -o main $(CFLAGS) $(LDFLAGS)

clean:
	rm -f *.o *~ core main
