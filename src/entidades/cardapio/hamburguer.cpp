#include "hamburguer.hpp"

namespace Cardapio{

    Hamburguer::Hamburguer(int qtd_produto, float valor_unitario, string tipo, bool artesanal):
    Produto(qtd_produto, valor_unitario){
        this->_tipo = tipo;
        this->_artesanal = artesanal;
    }

    string Hamburguer::get_tipo(){
        return this->_tipo;
    }

    bool Hamburguer::get_artesanal(){
        return this->_artesanal;
    }

    void Hamburguer::print(){
        cout << "Hamburguer" << endl;
        cout << "\tQuantidade: " << this->get_quantidade_produto() << endl;
        cout << "\tValor Unitario: " << this->get_valor_unitario() << endl;
        cout << "\tTipo: " << this->_tipo << endl;
        if (this->_artesanal) 
            cout << "\tArtesanal" << endl;
    }
}