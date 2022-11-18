MAINC = g++
AUXF = -std=c++11 -Wall
TARGET = vpl_execution

BUILD = ./build
SRC = ./src
INCLUDE = ./include

${BUILD}/${TARGET}: ${BUILD}/pedido.o ${BUILD}/pizza.o ${BUILD}/hamburguer.o ${BUILD}/produto.o ${BUILD}/main.o
	${MAINC} ${AUXF} -o ${TARGET} ${BUILD}/*.o

${BUILD}/pedido.o: ${INCLUDE}/pedido.hpp ${SRC}/pedido.cpp
	${MAINC} ${AUXF} -I ${INCLUDE} -c ${SRC}/pedido.cpp -o ${BUILD}/pedido.o

${BUILD}/pizza.o: ${INCLUDE}/pizza.hpp ${SRC}/pizza.cpp
	${MAINC} ${AUXF} -I ${INCLUDE} -c ${SRC}/pizza.cpp -o ${BUILD}/pizza.o

${BUILD}/hamburguer.o: ${INCLUDE}/hamburguer.hpp ${SRC}/hamburguer.cpp
	${MAINC} ${AUXF} -I ${INCLUDE} -c ${SRC}/hamburguer.cpp -o ${BUILD}/hamburguer.o

${BUILD}/produto.o: ${INCLUDE}/produto.hpp ${SRC}/produto.cpp
	${MAINC} ${AUXF} -I ${INCLUDE} -c ${SRC}/produto.cpp -o ${BUILD}/produto.o

${BUILD}/main.o: ${INCLUDE}/pedido.hpp ${INCLUDE}/pizza.hpp ${INCLUDE}/hamburguer.hpp ${INCLUDE}/produto.hpp ${SRC}/main.cpp
	${MAINC} ${AUXF} -I ${INCLUDE} -c ${SRC}/main.cpp -o ${BUILD}/main.o

clean:
	rm -f ${BUILD}/*