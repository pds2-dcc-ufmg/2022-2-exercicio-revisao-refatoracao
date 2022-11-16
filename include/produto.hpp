#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
    private:
        int _q; 
        float _valorUnitario; 
    
    public:
        Produto(int, float); 
        virtual void print()=0;
        int get_q(); 
        float get_valorUnitario(); 
        void set_q(int);  
};


#endif