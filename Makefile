CC = gcc
CFLAGS = 
LIBS = -lncurses
INCLUDE = -I ./include
SRC = ./src
BUILD = ./build/clock

all: $(BUILD)

$(SRC)/main.o: $(SRC)/main.cpp
	$(CC) -c $^ -o $@ $(INCLUDE)

$(SRC)/clock.o: $(SRC)/clock.cpp
	$(CC) -c $^ -o $@ $(INCLUDE)

$(BUILD): $(SRC)/main.o $(SRC)/clock.o
	$(CC) $^ -o $@ $(LIBS)

clean:
	rm $(SRC)/*.o $(BUILD)