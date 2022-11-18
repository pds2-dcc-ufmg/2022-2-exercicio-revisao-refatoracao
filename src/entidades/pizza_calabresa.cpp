#include "pizza_calabresa.hpp"

PizzaCalabresa::PizzaCalabresa(int qtd, float valor_unitario, int pedacos, bool borda_rech) 
    : Pizza(qtd, valor_unitario, pedacos, borda_rech) {}

string PizzaCalabresa::get_sabor() {
    return "Calabresa";
}