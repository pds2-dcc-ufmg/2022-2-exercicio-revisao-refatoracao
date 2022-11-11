
CC=g++
CFLAGS=-std=c++11 -Wall
src = ./src
build = ./build
inc = ./includes

all: ./2022-2-exercicio-revisao-refatoracao/vpl_exec
${build}/main.o: ${inc}/produto.hpp ${inc}/pizza.hpp ${inc}/hamburguer.hpp ${inc}/pedido.hpp ${src}/main.cpp 
	${CC} ${CFLAGS} -I ${inc} -c ${src}/main.cpp -o ${build}/main.o

${build}/produto.o: ${inc}/produto.hpp ${src}/produto.cpp
	${CC} ${CFLAGS} -I ${inc} -c ${src}/produto.cpp -o ${build}/produto.o

${build}/pizza.o: ${inc}/produto.hpp ${inc}/pizza.hpp ${src}/pizza.cpp
	${CC} ${CFLAGS} -I ${inc} -c ${src}/pizza.cpp -o ${build}/pizza.o

${build}/hamburguer.o: ${inc}/produto.hpp ${inc}/hamburguer.hpp ${src}/hamburguer.cpp
	${CC} ${CFLAGS} -I ${inc} -c ${src}/hamburguer.cpp -o ${build}/hamburguer.o

${build}/pedido.o: ${inc}/produto.hpp ${inc}/pedido.hpp ${src}/pedido.cpp
	${CC} ${CFLAGS} -I ${inc} -c ${src}/pedido.cpp -o ${build}/pedido.o

./2022-2-exercicio-revisao-refatoracao/vpl_exec: ${build}/main.o ${build}/produto.o ${build}/pizza.o ${build}/hamburguer.o ${build}/pedido.o
	${CC} ${CFLAGS} ${build}/main.o ${build}/produto.o ${build}/pizza.o ${build}/hamburguer.o ${build}/pedido.o -o vpl_exec

run: all

	./vpl_exec < in.txt


clean:
	rm ./build/*.o 