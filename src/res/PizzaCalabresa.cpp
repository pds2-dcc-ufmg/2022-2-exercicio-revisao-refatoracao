#include "PizzaCalabresa.hpp"


PizzaCalabresa::PizzaCalabresa(int quantidade, float valor_unitario, int pedacos, bool borda_rech) : 
Pizza(quantidade, valor_unitario, pedacos, borda_rech) {   
    
}

string PizzaCalabresa::get_sabor() {
    return "Calabresa";
}