#include "hamburguer.hpp"

Hamburguer::Hamburguer(int quantidade, float valor_unitario, string tipo, bool artesanal): Produto(quantidade, valor_unitario), _tipo(tipo), _artesanal(artesanal) {
    
    if(artesanal) {
        valor_unitario = valor_unitario * taxa_artesanal;
        set_valor_unitario(valor_unitario);
    } 
}

void Hamburguer::print() {

    float valor_unitario = get_valor_unitario();
    int quantidade = get_quantidade();

    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << quantidade << endl;
    cout << "\tValor Unitario: " << valor_unitario << endl;
    cout << "\tTipo: " << _tipo << endl;

    if (_artesanal) 
        cout << "\tArtesanal" << endl;
}