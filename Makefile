CXX 	:= g++
C_FLAGS 	:= -Wall -std=c++11 -Wextra

BIN 	:= ./bin
SRC 	:= ./src
SRCENT 	:= ./src/entidades
INCLUDE 	:= ./include
EXECUTABLE 	:= vpl_exec

OBJ1 	:= pedido
OBJ2 	:= produto
OBJ2.1	:= pizza
OBJ2.2 	:= hamburguer

${EXECUTABLE}: ${BIN}/${OBJ1}.o ${BIN}/${OBJ2}.o ${BIN}/${OBJ2.1}.o ${BIN}/${OBJ2.2}.o ${BIN}/main.o
	${CXX} ${C_FLAGS} -o ./${EXECUTABLE} ${BIN}/*.o

${BIN}/${OBJ1}.o: ${INCLUDE}/${OBJ1}.hpp ${INCLUDE}/${OBJ2}.hpp ${INCLUDE}/${OBJ2.1}.hpp ${INCLUDE}/${OBJ2.2}.hpp ${SRCENT}/${OBJ1}.cpp
	${CXX} ${C_FLAGS} -I ${INCLUDE} -c ${SRCENT}/${OBJ1}.cpp -o ${BIN}/${OBJ1}.o

${BIN}/${OBJ2.1}.o: ${INCLUDE}/${OBJ2}.hpp ${INCLUDE}/${OBJ2.1}.hpp ${SRCENT}/${OBJ2.1}.cpp
	${CXX} ${C_FLAGS} -I ${INCLUDE} -c ${SRCENT}/${OBJ2.1}.cpp -o ${BIN}/${OBJ2.1}.o

${BIN}/${OBJ2.2}.o: ${INCLUDE}/${OBJ2}.hpp ${INCLUDE}/${OBJ2.2}.hpp ${SRCENT}/${OBJ2.2}.cpp
	${CXX} ${C_FLAGS} -I ${INCLUDE} -c ${SRCENT}/${OBJ2.2}.cpp -o ${BIN}/${OBJ2.2}.o

${BIN}/${OBJ2}.o: ${INCLUDE}/${OBJ2}.hpp ${SRCENT}/${OBJ2}.cpp
	${CXX} ${C_FLAGS} -I ${INCLUDE} -c ${SRCENT}/${OBJ2}.cpp -o ${BIN}/${OBJ2}.o

${BIN}/main.o: ${INCLUDE}/${OBJ1}.hpp ${INCLUDE}/${OBJ2}.hpp ${INCLUDE}/${OBJ2.1}.hpp ${INCLUDE}/${OBJ2.2}.hpp ${SRC}/main.cpp
	${CXX} ${C_FLAGS} -I ${INCLUDE} -c ${SRC}/main.cpp -o ${BIN}/main.o

# Comando para limpar arquivos gerados durante a compilação. 
# Para usar é necessário chamar 'make clean'
clean:
	rm -f ${BIN}/* 
