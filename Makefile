ENTIDADES = src/entidades

vpl_exec: main.o Pedido.o Produto.o Hamburguer.o Pizza.o PizzaCalabresa.o PizzaMarguerita.o
	g++ build/main.o build/Pedido.o build/Produto.o build/Hamburguer.o build/Pizza.o build/PizzaCalabresa.o build/PizzaMarguerita.o -o vpl_exec

main.o: src/main.cpp
	g++ -c src/main.cpp -I include -o build/main.o

Pedido.o: $(ENTIDADES)/pedido.cpp include/pedido.hpp
	g++ -c $(ENTIDADES)/pedido.cpp -I include -o build/Pedido.o

Produto.o: $(ENTIDADES)/produto.cpp include/produto.hpp
	g++ -c $(ENTIDADES)/produto.cpp -I include -o build/Produto.o

Hamburguer.o: $(ENTIDADES)/hamburguer.cpp include/hamburguer.hpp
	g++ -c $(ENTIDADES)/hamburguer.cpp -I include -o build/Hamburguer.o

Pizza.o: $(ENTIDADES)/pizza.cpp include/pizza.hpp
	g++ -c $(ENTIDADES)/pizza.cpp -I include -o build/Pizza.o

PizzaCalabresa.o: $(ENTIDADES)/pizza_calabresa.cpp include/pizza_calabresa.hpp
	g++ -c $(ENTIDADES)/pizza_calabresa.cpp -I include -o build/PizzaCalabresa.o

PizzaMarguerita.o: $(ENTIDADES)/pizza_marguerita.cpp include/pizza_marguerita.hpp
	g++ -c $(ENTIDADES)/pizza_marguerita.cpp -I include -o build/PizzaMarguerita.o