CC = g++
BUILD_DIR = ./build
NAME = vpl_exec
INCLUDE_DIR = ./include
RES_DIR = /res
SRC_DIR = ./src
CFLAGS = -std=c++11 -Wall

all: $(BUILD_DIR)/$(NAME)

$(BUILD_DIR)/$(NAME) : \
		$(BUILD_DIR)/Pizza.o \
		$(BUILD_DIR)/main.o \
		$(BUILD_DIR)/Hamburguer.o \
		$(BUILD_DIR)/Produto.o \
		$(BUILD_DIR)/Pedido.o
	$(CC) $(CFLAGS) $(BUILD_DIR)/*.o -o ./$(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)$(RES_DIR)/%.cpp $(INCLUDE_DIR)/%.hpp
	$(CC) -c $(CFLAGS) $< -I $(INCLUDE_DIR) -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) -c $(CFLAGS) $< -I $(INCLUDE_DIR) -o $@

run:
	./$(NAME) < in.txt

clean:
	rm -f $(BUILD_DIR)/*.o
	
