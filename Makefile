CC=g++
CFLAGS=-Wall -std=c++11
TARGET=program

BUILD = ./build
SRC = ./src
INCLUDE = ./include

${BUILD}/${TARGET}: ${BUILD}/Pizza.o ${BUILD}/Hamburguer.o ${BUILD}/Produto.o ${BUILD}/Pedido.o ${BUILD}/main.o
	${CC} ${CFLAGS} ${BUILD}/*.o -o ${TARGET}

${BUILD}/Pizza.o: ${INCLUDE}/Pizza.hpp ${INCLUDE}/Produto.hpp ${SRC}/produtos/Pizza.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/produtos/Pizza.cpp -o ${BUILD}/Pizza.o

${BUILD}/Hamburguer.o: ${INCLUDE}/Hamburguer.hpp ${INCLUDE}/Produto.hpp ${SRC}/produtos/Hamburguer.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/produtos/Hamburguer.cpp -o ${BUILD}/Hamburguer.o

${BUILD}/Produto.o: ${INCLUDE}/Produto.hpp ${SRC}/produtos/Produto.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/produtos/Produto.cpp -o ${BUILD}/Produto.o

${BUILD}/Pedido.o: ${INCLUDE}/Pedido.hpp ${INCLUDE}/Produto.hpp ${SRC}/Pedido.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/Pedido.cpp -o ${BUILD}/Pedido.o

${BUILD}/main.o: ${INCLUDE}/Pedido.hpp ${INCLUDE}/Produto.hpp ${INCLUDE}/Hamburguer.hpp ${INCLUDE}/Pizza.hpp ${SRC}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/main.cpp -o ${BUILD}/main.o