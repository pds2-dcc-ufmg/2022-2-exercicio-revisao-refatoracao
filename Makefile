CC = g++
CFLAGS=-std=c++11 -Wall
TARGET = vpl_exec

BUILD_DIR = ./build
INCLUDE_DIR = ./include
SRC_DIR = ./src

all: ${BUILD_DIR}/${TARGET}	
 
${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/produto.o ${BUILD_DIR}/pedido.o ${BUILD_DIR}/pizza.o ${BUILD_DIR}/hamburguer.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/produto.o: ${INCLUDE_DIR}/produto.hpp ${SRC_DIR}/produto.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/produto.cpp -o ${BUILD_DIR}/produto.o

${BUILD_DIR}/pedido.o: ${INCLUDE_DIR}/pedido.hpp ${INCLUDE_DIR}/produto.hpp ${SRC_DIR}/pedido.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/pedido.cpp -o ${BUILD_DIR}/pedido.o

${BUILD_DIR}/pizza.o: ${INCLUDE_DIR}/pizza.hpp ${INCLUDE_DIR}/produto.hpp ${SRC_DIR}/pizza.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/pizza.cpp -o ${BUILD_DIR}/pizza.o

${BUILD_DIR}/hamburguer.o: ${INCLUDE_DIR}/hamburguer.hpp ${INCLUDE_DIR}/produto.hpp ${SRC_DIR}/hamburguer.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/hamburguer.cpp -o ${BUILD_DIR}/hamburguer.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/pedido.hpp ${INCLUDE_DIR}/produto.hpp ${INCLUDE_DIR}/pizza.hpp ${INCLUDE_DIR}/hamburguer.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

run: all
	./${BUILD_DIR}/${TARGET} < in.txt

clean:
	rm -f ${BUILD_DIR}/*