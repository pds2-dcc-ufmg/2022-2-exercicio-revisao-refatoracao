#include "pizza_marguerita.hpp"

PizzaMarguerita::PizzaMarguerita(int q, float valor_unitario, int pedacos, bool borda_rech) 
    : Pizza(q, valor_unitario, pedacos, borda_rech) {};

string PizzaMarguerita::get_sabor() { 
    return "Marguerita"; 
}