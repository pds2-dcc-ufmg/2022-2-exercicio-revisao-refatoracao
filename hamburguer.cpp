#include "hamburguer.hpp"


hamburguer::hamburguer(){}

hamburguer::hamburguer(int _quantidade, float valor_unitario, string tipo, bool artesanal): 
    produto(_quantidade, valor_unitario), _tipo(tipo), _artesanal(artesanal){}

void hamburguer::print() {
            cout << "Hamburguer" << endl;
            cout << "\t" << "Quantidade: " << get_quantidade() << endl;
            cout << "\t" << "Valor Unitario: " << get_valor_unitario() << endl;
            cout << "\t" << "Tipo: " << _tipo << endl;
            if (_artesanal) {
                cout << "\t" << "Artesanal" << endl;
            }
        }