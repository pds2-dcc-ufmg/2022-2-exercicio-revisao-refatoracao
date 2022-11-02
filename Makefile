CC = g++
CFLAGS = -std=c++11 -Wall
TARGET = program

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

all: vpl_exec

${BUILD_DIR}/${TARGET} : ${BUILD_DIR}/produto.o ${BUILD_DIR}/pedido.o ${BUILD_DIR}/pizza.o ${BUILD_DIR}/hamburguer.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} ${BUILD_DIR}/*.o -o ${BUILD_DIR}/${TARGET}

${BUILD_DIR}/pedido.o : ${INCLUDE_DIR}/pedido.hpp ${SRC_DIR}/entidades/pedido.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/pedido.cpp -o ${BUILD_DIR}/pedido.o

${BUILD_DIR}/produto.o : ${INCLUDE_DIR}/produto.hpp ${SRC_DIR}/entidades/cardapio/produto.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/cardapio/produto.cpp -o ${BUILD_DIR}/produto.o

${BUILD_DIR}/pizza.o : ${INCLUDE_DIR}/pizza.hpp ${SRC_DIR}/entidades/cardapio/pizza.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/cardapio/pizza.cpp -o ${BUILD_DIR}/pizza.o

${BUILD_DIR}/hamburguer.o : ${INCLUDE_DIR}/hamburguer.hpp ${SRC_DIR}/entidades/cardapio/hamburguer.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/cardapio/hamburguer.cpp -o ${BUILD_DIR}/hamburguer.o

${BUILD_DIR}/main.o : ${INCLUDE_DIR}/pedido.hpp ${INCLUDE_DIR}/produto.hpp ${INCLUDE_DIR}/pizza.hpp ${INCLUDE_DIR}/hamburguer.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

vpl_exec: ${BUILD_DIR}/pedido.o ${BUILD_DIR}/produto.o ${BUILD_DIR}/pizza.o ${BUILD_DIR}/hamburguer.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} ${BUILD_DIR}/pedido.o ${BUILD_DIR}/produto.o ${BUILD_DIR}/pizza.o ${BUILD_DIR}/hamburguer.o ${BUILD_DIR}/main.o -o vpl_exec