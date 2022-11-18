#include "pizza.hpp"

Pizza::Pizza(string sabor, int quantidade, float valor_unitario, int pedacos, bool borda_rech)
    : Produto("Pizza de ", quantidade, valor_unitario), _sabor(sabor), _pedacos(pedacos), _borda_recheada(borda_rech){
        if(_borda_recheada){
            this->setValor(this->getValor()*_TAXA_BORDA_RECHEADA);
        }   
}

string Pizza::getSabor(){
    return _sabor;
}

int Pizza::getPedacos(){
    return _pedacos;
}

bool Pizza::getBordaRecheada(){
    return _borda_recheada;
}

void Pizza::print_info(){
    cout << this->getTipo() << this->getSabor() << endl;
    Produto::print_info();
    cout << "\tPedacos: " << this->getPedacos() << endl;
    if (_borda_recheada) cout << "\tBorda Recheada" << endl;
}