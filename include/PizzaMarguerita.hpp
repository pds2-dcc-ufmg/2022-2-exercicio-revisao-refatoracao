#ifndef PIZZA_MARGUERITA_H
#define PIZZA_MARGUERITA_H

#include "Pizza.hpp"

class PizzaMarguerita : public Pizza {
   public:
    PizzaMarguerita(int quantidade, float valor_unitario, int pedacos, bool is_borda_rech);

    virtual string getSabor() override;
};

#endif