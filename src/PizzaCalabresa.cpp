#include "PizzaCalabresa.hpp"

PizzaCalabresa::PizzaCalabresa(int quantidade, float valor_unitario, int pedacos, bool is_borda_rech)
    : Pizza(quantidade, valor_unitario, pedacos, is_borda_rech) {}

string PizzaCalabresa::getSabor() {
    return "Calabresa";
}