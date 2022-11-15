all: hamburguer.o pizza.o produto.o pedido.o main.o
	g++ -std=c++11 build/hamburguer.o build/pizza.o build/produto.o build/pedido.o build/main.o -o ./vpl_execution
	
hamburguer.o: ./src/res/hamburguer.cpp
	g++ -c -I ./include -std=c++11 ./src/res/hamburguer.cpp -o ./build/hamburguer.o

pizza.o: ./src/res/pizza.cpp
	g++ -c -I ./include -std=c++11 ./src/res/pizza.cpp -o ./build/pizza.o

produto.o: ./src/res/produto.cpp
	g++ -c -I ./include -std=c++11 ./src/res/produto.cpp -o ./build/produto.o

pedido.o: ./src/res/pedido.cpp
	g++ -c -I ./include -std=c++11 ./src/res/pedido.cpp -o ./build/pedido.o

main.o: ./src/main.cpp
	g++ -c -I ./include -std=c++11 ./src/main.cpp -o ./build/main.o

run: all
	./vpl_execution < in.txt
