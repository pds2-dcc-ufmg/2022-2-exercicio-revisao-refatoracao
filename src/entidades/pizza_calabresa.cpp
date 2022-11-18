#include "pizza_calabresa.hpp"

PizzaCalabresa::PizzaCalabresa(int q, float valor_unitario, int pedacos, bool borda_rech) 
    : Pizza(q, valor_unitario, pedacos, borda_rech) {}

string PizzaCalabresa::get_sabor() {
    return "Calabresa";
}