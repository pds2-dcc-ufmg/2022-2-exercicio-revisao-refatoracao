#include "pizza_marguerita.hpp"

PizzaMarguerita::PizzaMarguerita(int qtd, float valor_unitario, int pedacos, bool borda_rech) 
    : Pizza(qtd, valor_unitario, pedacos, borda_rech) {};

string PizzaMarguerita::get_sabor() { 
    return "Marguerita"; 
}