#include "PizzaMarguerita.hpp"

PizzaMarguerita::PizzaMarguerita(int quantidade, float valor_unitario, int pedacos, bool borda_rech)
    : Pizza(quantidade, valor_unitario, pedacos, borda_rech) {}

string PizzaMarguerita::getSabor() {
    return "Marguerita";
}