#include "Pizza.hpp"


Pizza::Pizza(int q, float valor_unitario, int pedacos, bool borda_rech) : Produto(q, valor_unitario) {
    this->_pedacos = pedacos;
    this->_borda_recheada = borda_rech;
}
        
void Pizza::print() {
    cout << "Pizza de " << get_sabor() << endl;

    cout << "\t" << "Quantidade: " << this->get_quantidade() << endl;
    cout << "\t" << "Valor Unitario: " << this->get_valor_unitario() << endl;

    cout << "\t" << "Pedacos: " << this->_pedacos << endl;
    if (this->_borda_recheada == 1) cout << "\t" << "Borda Recheada" << endl;
}
