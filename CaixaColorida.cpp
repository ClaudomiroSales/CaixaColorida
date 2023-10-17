#include "CaixaColorida.h"

CaixaColorida::CaixaColorida(double altura, double largura, Color color )
: Caixa( altura, largura )
{
    this->color = color;
}