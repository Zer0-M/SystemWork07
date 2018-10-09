all : driver.o linkedlist.o
	gcc driver.o linkedlist.o
driver.o : driver.c linkedlist.h
	gcc -c driver.c linkedlist.h
linkedlist.o : linkedlist.c linkedlist.h
	gcc -c linkedlist.c linkedlist.h
run :
	./a.out
clear :
	rm *.o