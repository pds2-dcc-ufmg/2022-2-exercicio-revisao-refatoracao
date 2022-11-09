//
// Created by User on 09/11/2022.
//
#include "pizza_calabresa.hpp"
Pizza_calabresa::Pizza_calabresa(int quantidade, float valor_unitario, int pedacos, bool borda_rech): Pizza(quantidade, valor_unitario, pedacos, borda_rech){}

string Pizza_calabresa::get_sabor() {
        return "Calabresa";
}