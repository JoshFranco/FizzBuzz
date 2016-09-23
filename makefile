CFLAGS=-Wall
LIBS=-lcheck -lm -pthread -lrt

all: test

test: FizzBuzzOut-TEST
	./FizzBuzzOut-Test

FizzBuzzOut-TEST: FizzBuzz_Test.o FizzBuzz.o
	gcc -o FizzBuzzOut-Test FizzBuzz.o FizzBuzz_Test.o $(LIBS)

FizzBuzz_Test.o: FizzBuzz_Test.c FizzBuzz.h
	gcc $(CFLAGS) -c FizzBuzz_Test.c

FizzBuzz_Test.c: FizzBuzz_Test.check
	checkmk FizzBuzz_Test.check >FizzBuzz_Test.c

Clean:
	rm *o FizzBuzzOut-TEST


