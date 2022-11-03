#include "pizza.hpp"

using namespace std;

Pizza::Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech, string sabor) 
    : Produto(quantidade, valor_unitario), _pedacos(pedacos), _borda_recheada(borda_rech), _sabor(sabor) 
{
    //Movi a atualização de valor, no caso de uma borda recheada, para o construtor, para que a classe
    //pizza contenha o fator de atualização de preço
    if (borda_rech) { valor_unitario *= fator_borda; }
}

string Pizza::get_sabor() { return _sabor; }

void Pizza::print()
{
    cout << "Pizza de " << _sabor << endl;
    cout << "\tQuantidade: " << _quantidade << endl;
    cout << "\tValor Unitario: " << _valorUnitario << endl;
    cout << "\tPedacos: " << _pedacos << endl;
    if (_borda_recheada)
        cout << "\tBorda Recheada" << endl;
}
