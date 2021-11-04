CC=g++
CFLAGS=-c -Wall -O2

all: librgbconvert.a

librgbconvert.a: rgbconvert.o
	ar -rc librgbconvert.a rgbconvert.o

rgbconvert.o: rgbconvert.h rgbconvert.c
	$(CC) $(CFLAGS) rgbconvert.c

clean:
	rm *.o librgbconvert.a