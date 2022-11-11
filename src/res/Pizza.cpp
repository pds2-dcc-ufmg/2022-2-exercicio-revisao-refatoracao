#include "Pizza.hpp"

/*Adicionado sabor ao construtor pois as subclasses nao especializavam o suficiente para se justificarem*/
Pizza::Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech, string sabor) : Produto(quantidade, valor_unitario) {
    this->_pedacos = pedacos;
    this->_borda_recheada = borda_rech;
    this->_sabor = sabor;       
}

Pizza::~Pizza() {
    /*Usando smart pointers*/
}

string Pizza::get_sabor() {
    return this->_sabor;
}

/*Realiza a adição das tarifas necessárias usando o set_valor_unitario de produto*/
void Pizza::adicionar_tarifas() {
    if (this->_borda_recheada == 1) {
        this->set_valor_unitario(TARIFA_BORDA_RECHEADA * this->get_valor_unitario());
        return;
    }

    else return;
}

void Pizza::print() {
    cout << "Pizza de " << this->_sabor << endl;

    Produto::print();       

    cout << "\t" << "Pedacos: " << this->_pedacos << endl;
    if (this->_borda_recheada == 1) cout << "\t" << "Borda Recheada" << endl;
}
