#include "Caixa.h"

Caixa::Caixa( double altura, double largura, double comprimento )
{
    this->altura  = ( altura > 0.0 )  ? altura  : 0.0;
    this->largura = ( largura > 0.0 ) ? largura : 0.0;
    this->comprimento = ( comprimento > 0.0 ) ? : 0.0;
}