# C compiler options
COPS = -Wall -g

# this are the executables to be produced
all: hello.bin mainstr.bin 

hello.bin : hello.c
	@echo "Compiling hello..." 
	gcc $(COPS) hello.c -o hello.bin


mainstr.bin : mainstr.o substr.o
	gcc $(COPS) mainstr.o substr.o -o mainstr.bin
	
mainstr.o : substr.h mainstr.c
	gcc $(COPS) mainstr.c mainstr.o
	
substr.o : substr.h substr.c
	gcc $(COPS) substr.c mainstr.o

.PHONY: all clean

clean:
	rm -f *.o
	rm -f *.bin
	rm -f *.elf