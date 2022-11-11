#include "hamburguer.hpp"

    Hamburguer::Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal): Produto(quantidade, valor_unitario), _tipo(tipo), _artesanal(artesanal) {}
  
    void  Hamburguer::print_info() {

        cout << "Hamburguer" << endl;
        cout << "\tQuantidade: " << this->get_quantidade() << endl;
        cout << "\tValor Unitario: " << this->get_valor_unitario() << endl;
        cout << "\tTipo: " << _tipo << endl;
        if (_artesanal) cout << "\tArtesanal" << endl;

    }