#include "pedido.hpp"
#include "hamburguer.hpp"

hamburguer::hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal): produto(quantidade, valor_unitario), _tipo(tipo), _artesanal(artesanal){}

void hamburguer::print() {
            cout << "Hamburguer" << endl;
            cout << "\tQuantidade: " << _quantidade << endl;
            cout << "\tValor Unitario: " << _valorUnitario << endl;
            cout << "\tTipo: " << _tipo << endl;
            if (_artesanal){
                 cout << "\tArtesanal" << endl;
            }
        }
