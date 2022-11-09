#include "pizza_marguerita.hpp"

Pizza_marguerita::Pizza_marguerita(int quantidade, float valor_unitario, int pedacos, bool borda_rech): Pizza(quantidade, valor_unitario, pedacos, borda_rech){get_sabor();}

std::string Pizza_marguerita::get_sabor(){
    return "Marguerita";
}