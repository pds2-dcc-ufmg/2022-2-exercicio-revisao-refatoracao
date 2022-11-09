#include "Pizza.hpp"


Pizza::Pizza(int q, float valor_unitario, int pedacos, bool borda_rech, string sabor) : Produto(q, valor_unitario) {
    this->_pedacos = pedacos;
    this->_borda_recheada = borda_rech;
    this->_sabor = sabor;       /*Adicionado sabor ao construtor pois as subclasses nao especializavam o suficiente para se justificarem*/
}

Pizza::~Pizza() {
    //Usando smart pointers
}

string Pizza::get_sabor() {
    return this->_sabor;
}

void Pizza::set_sabor(string sabor) {
    this->_sabor = sabor;
}

void Pizza::print() {
    cout << "Pizza de " << this->get_sabor() << endl;

    Produto::print();       /*Printa as informações da pizza usando o print do Produto*/

    cout << "\t" << "Pedacos: " << this->_pedacos << endl;
    if (this->_borda_recheada == 1) cout << "\t" << "Borda Recheada" << endl;
}
