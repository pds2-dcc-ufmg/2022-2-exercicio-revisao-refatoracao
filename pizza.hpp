#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pizza: public Produto {
    
    private:

      int _pedacos;
      bool _borda_recheada;

    public:

        Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech): Produto(quantidade, valor_unitario), _pedacos(pedacos), _borda_recheada(borda_rech){}

        virtual string get_sabor()=0;

        virtual void print_info() override{

            cout << "Pizza de " << get_sabor() << endl;
            cout << "\tQuantidade: " << this->get_quantidade() << endl;
            cout << "\tValor Unitario: " << this->get_valor_unitario() << endl;
            cout << "\tPedacos: " << _pedacos << endl;

            if (_borda_recheada) 
            cout << "\tBorda Recheada" << endl;

        }
        
        int get_pedacos() { return this->_pedacos; }
        bool get_borda_recheada() { return this->_borda_recheada; }

};

#endif