#ifndef CAIXA_H
#define CAIXA_H

#include <ostream>
using std::ostream;

class Caixa   
{
    friend ostream &operator<<( ostream &, const Caixa & );
public:
    Caixa( double = 1, double = 1, double = 1 );

    double calcVolume( ) const { return altura * largura * comprimento; }

private:
    double altura;
    double largura;
    double comprimento;
};

#endif