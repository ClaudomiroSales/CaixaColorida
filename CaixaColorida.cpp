#include "CaixaColorida.h"

CaixaColorida::CaixaColorida(double altura, double largura, Color color )
: Caixa( altura, largura )
{
    this->color = color;
}

ostream &operator<<(ostream &out, const CaixaColorida &caixaColor)
{
    out << static_cast< Caixa >( caixaColor );
    out << "Cor: " << caixaColor.color;
    out << '\n';
}
