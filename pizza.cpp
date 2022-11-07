#include "pizza.hpp"

Pizza::Pizza(string sabor, int quantidade, float valor_unitario, int pedacos, bool borda_recheada): Produto(quantidade, valor_unitario),  _sabor(sabor), _pedacos(pedacos), _borda_recheada(borda_recheada) {

    //verifica se a pizza tem borda recheada e aplica 40% de aumento, em caso verdadeiro
    if(borda_recheada) {
        this->_valor_unitario = valor_unitario * TAXA_BORDA_RECHEADA;
    } else {
        this->_valor_unitario = valor_unitario;
    }
}

Pizza::~Pizza() {}

string Pizza::get_sabor() { return this->_sabor; }
        
void Pizza::is_borda_recheada() {

    //checa se a borda é recheada e retorna o output a indicando, em caso verdadeiro
    if(_borda_recheada) {
        cout << "\tBorda Recheada" << endl;
    }
}

void Pizza::print() {
    cout << "Pizza de " << get_sabor() << endl;
    cout << "\tQuantidade: " << _quantidade << endl;
    cout << "\tValor Unitario: " << _valor_unitario << endl;
    cout << "\tPedacos: " << _pedacos << endl;
    is_borda_recheada();           
}