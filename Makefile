CC = g++
CFLAGS = -std=c++11 -Wall
TARGET = vpl_exec

BUILD = ./build
SRC = ./src
SRC_ENTITY = ./src/entities
INCLUDE = ./include

all: lib link

lib:
	$(CC) $(CFLAGS) -c $(SRC_ENTITY)/produto.cpp -I $(INCLUDE) -o $(BUILD)/produto.o
	$(CC) $(CFLAGS) -c $(SRC_ENTITY)/pizza.cpp -I $(INCLUDE) -o $(BUILD)/pizza.o
	$(CC) $(CFLAGS) -c $(SRC_ENTITY)/hamburguer.cpp -I $(INCLUDE) -o $(BUILD)/hamburguer.o
	$(CC) $(CFLAGS) -c $(SRC_ENTITY)/pedido.cpp -I $(INCLUDE) -o $(BUILD)/pedido.o
	$(CC) $(CFLAGS) -c $(SRC)/main.cpp -I $(INCLUDE) -o $(BUILD)/main.o

link:
	$(CC) $(BUILD)/*.o -o ./$(TARGET)

run:
	./vpl_exec

clean:
	rm -f ./build/*