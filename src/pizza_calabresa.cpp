#include "pizza_calabresa.hpp"

    Pizza_calabresa::Pizza_calabresa(int quantidade, float valor_unitario, int pedacos, bool borda_rech): Pizza(quantidade, valor_unitario, pedacos, borda_rech){
        this->get_sabor();
    }
        
    string Pizza_calabresa::get_sabor(){
            return "Calabresa";
        }