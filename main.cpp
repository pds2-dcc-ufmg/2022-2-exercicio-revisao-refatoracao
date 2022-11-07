#include "pedido.hpp"
#include "hamburguer.hpp"
#include "pizza.hpp"

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    string endereco;
    string tipo;
    string sabor;
    int quantidade, pedacos;
    float valor_unitario;
    bool borda_recheada, artesanal;            
    
    //cria um smart pointer de Pedido no heap, com base no endereço informado no input do usuário
    getline(cin, endereco);
    unique_ptr<Pedido> pedidos(new Pedido(endereco));

    while(cin >> tipo) {
        //transforma o input do usuário do tipo de produto para lowercase (ex: Pizza -> pizza)
        transform(tipo.begin(), tipo.end(), tipo.begin(), ::tolower);
        
        //bloco para tratar exceção caso produto informado pelo usuário não seja válido
        try {
            if(tipo == "pizza") {

                cin >> sabor >> pedacos >> borda_recheada >> valor_unitario >> quantidade;

                shared_ptr<Pizza> pizza(new Pizza(sabor, quantidade, valor_unitario, pedacos, borda_recheada));
                pedidos->adiciona_produto(pizza);

            } else if(tipo == "hamburguer") {

                cin >> tipo >> artesanal >> valor_unitario >> quantidade;

                shared_ptr<Hamburguer> hamburguer(new Hamburguer(quantidade, valor_unitario, tipo, artesanal));
                pedidos->adiciona_produto(hamburguer);
            } else {
                throw "Produto invalido.";
            }

        } catch(const char* produto_exception) {
            cout << "Excecao: " << produto_exception << endl;
        }
    }

    //imprime endereço, valor total, itens e informações dos itens do pedido
    pedidos->print_resumo();
    return 0;
}