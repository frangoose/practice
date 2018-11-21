CC=gcc
CFLAGS=-c -Wall

hello_world: hello_world.o
	$(CC) hello_world.o -o hello_world

hello_world.o: hello_world.c
	$(CC) $(CFLAGS) hello_world.c

ptr_practice: ptr_practice.o
	$(CC) ptr_practice.o -o ptr_practice 

ptr_practice.o: ptr_practice.c
	$(CC) $(CFLAGS) ptr_practice.c

bubblesort: bubblesort.o
	$(CC) bubblesort.o -o bubblesort 

bubblesort.o: bubblesort.c
	$(CC) $(CFLAGS) bubblesort.c

binarysearch: binarysearch.o
	$(CC) binarysearch.o -o binarysearch 

binarysearch.o: binarysearch.c
	$(CC) $(CFLAGS) binarysearch.c

linkedlist: linkedlist.o
	$(CC) linkedlist.o -o linkedlist

linkedlist.o: linkedlist.c
	$(CC) $(CFLAGS) linkedlist.c

clean:
	rm -f *.o
