# Build for Unix filter.c

all: filter

filter: filter.c apue.h
	gcc filter.c -o filter

clean: 
	rm -f filter *.o

test: filter
	./filter
	