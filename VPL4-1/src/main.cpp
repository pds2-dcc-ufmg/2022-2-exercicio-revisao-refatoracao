#include "pedido.hpp"
#include "produto.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"

#include <iostream>
#include <map>

using namespace std;

int main() {

    string endereco;
    getline(cin, endereco);
    Pedido* pedido = new Pedido(endereco);    
    
    /*Mapeando as entradas para facilitar o uso do switch*/
    map <string, int> entradas = {{"Pizza", 1}, {"Hamburguer", 2}};
    string data;
    int valor1;
    
    while (cin >> data) {

        valor1 = entradas[data];

        switch (valor1) {

            case 1: {

                string sabor;
                bool bordaRecheada;
                int quantidade, pedacos;
                float valorUnitario;

                cin >> sabor >> pedacos >> bordaRecheada >> valorUnitario >> quantidade;
                if (bordaRecheada)
                    valorUnitario *= 1.4;

                Produto* pizza = new Pizza(quantidade, valorUnitario, pedacos, bordaRecheada, sabor);
                pedido->adicionarProduto(pizza);
                break;
            }

            case 2: {

                string tipo;
                bool artesanal;
                int quantidade;
                float valorUnitario;

                cin >> tipo >> artesanal >> valorUnitario >> quantidade;
                if (artesanal)
                    valorUnitario *= 2.0;

                Produto* hamburguer = new Hamburguer(quantidade, valorUnitario, tipo, artesanal);
                pedido->adicionarProduto(hamburguer);
                break;
            }
        }
    }

    pedido->printResumo();
    delete pedido;

    return 0;
}