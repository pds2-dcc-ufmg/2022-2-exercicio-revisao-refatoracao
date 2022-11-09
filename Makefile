CC = g++
NAME = vpl_exec
BUILD_DIR = ./build
INCLUDE_DIR = ./include
SRC_DIR = ./src
RES_DIR = /resource
RES_PROD = /produtos
CFLAGS = --std=c++11 -Wall -Wextra
INPUT = ./in.txt

all: ./$(NAME)

./$(NAME): \
		$(BUILD_DIR)/Hamburguer.o \
		$(BUILD_DIR)/Pizza.o \
		$(BUILD_DIR)/Produto.o \
		$(BUILD_DIR)/Cardapio.o \
		$(BUILD_DIR)/Pedido.o \
		$(BUILD_DIR)/main.o
	$(CC) $(CFLAGS) $(BUILD_DIR)/*.o -o ./$(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)$(RES_PROD)/%.cpp $(INCLUDE_DIR)/%.hpp
	$(CC) -c $(CFLAGS) $< -I $(INCLUDE_DIR) -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)$(RES_DIR)/%.cpp $(INCLUDE_DIR)/%.hpp
	$(CC) -c $(CFLAGS) $< -I $(INCLUDE_DIR) -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) -c $(CFLAGS) $< -I $(INCLUDE_DIR) -o $@

run:
	./$(NAME) < $(INPUT)

clean: 
	rm -f $(BUILD_DIR)/*.o
	rm -f ./$(NAME)