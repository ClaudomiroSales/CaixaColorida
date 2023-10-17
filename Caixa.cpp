#include "Caixa.h"

Caixa::Caixa( double altura, double largura, double comprimento )
{
    this->altura  = ( altura > 0.0 )  ? altura  : 0.0;
    this->largura = ( largura > 0.0 ) ? largura : 0.0;
    this->comprimento = ( comprimento > 0.0 ) ? : 0.0;
}

ostream &operator<<(ostream &out, const Caixa &caixa)
{
    out << caixa.altura << ", " << caixa.largura << ", " << caixa.comprimento;
    out << '\n';
    out << "Volume: ";
    out << caixa.calcVolume( ) << '\n';

    return out;
}
