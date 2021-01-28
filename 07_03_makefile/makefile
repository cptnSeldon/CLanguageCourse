CC = gcc
RM = del
C_FLAGS = -g -Wall

# build all
all: main.o hello.o world.o
	$(CC) $(C_FLAGS) -o helloWorld.exe main.o hello.o world.o

# build main.o
main.o: main.c
	$(CC) $(C_FLAGS) -c main.c

# build hello.o
hello.o: hello.c
	$(CC) $(C_FLAGS) -c hello.c

# build world.o
world.o: world.c
	$(CC) $(C_FLAGS) -c world.c

# clean
clean:
	$(RM) *.o helloWorld.exe