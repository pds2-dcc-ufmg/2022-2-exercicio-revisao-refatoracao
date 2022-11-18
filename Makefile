CC=g++
CFLAGS=-std=c++11
TARGET=vpl_exec

BUILD_DIR = ./build
SRC_DIR	= ./src
INCLUDE_DIR = ./include

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Hamburguer.o ${BUILD_DIR}/Pedido.o ${BUILD_DIR}/Pizza.o ${BUILD_DIR}/Produto.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Hamburguer.o: ${INCLUDE_DIR}/Hamburguer.hpp ${SRC_DIR}/Hamburguer.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Hamburguer.cpp -o ${BUILD_DIR}/Hamburguer.o

${BUILD_DIR}/Pedido.o: ${INCLUDE_DIR}/Pedido.hpp ${SRC_DIR}/Pedido.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Pedido.cpp -o ${BUILD_DIR}/Pedido.o
	
${BUILD_DIR}/Pizza.o: ${INCLUDE_DIR}/Pizza.hpp ${SRC_DIR}/Pizza.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Pizza.cpp -o ${BUILD_DIR}/Pizza.o
		
${BUILD_DIR}/Produto.o: ${INCLUDE_DIR}/Produto.hpp ${SRC_DIR}/Produto.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Produto.cpp -o ${BUILD_DIR}/Produto.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Hamburguer.hpp ${INCLUDE_DIR}/Pedido.hpp ${INCLUDE_DIR}/Pizza.hpp ${INCLUDE_DIR}/Produto.hpp  ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -f ${BUILD_DIR}/*