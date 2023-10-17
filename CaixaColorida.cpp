#include "CaixaColorida.h"

CaixaColorida::CaixaColorida(double altura, double largura, double comprimento, Color color )
: Caixa( altura, largura, comprimento )
{
    this->color = color;
}

string CaixaColorida::getColor(Color color) const
{
    if( color == RED )
        return "RED";

    if( color == BLUE )
        return "BLUE";

    if( color == WHITE )
        return "WHITE";

    return "NODEFINED";
}

ostream &operator<<(ostream &out, const CaixaColorida &caixaColor)
{
    out << "Imprimindo caixa colorida.\n";
    out << static_cast< Caixa >( caixaColor );
    out << "Cor: " << caixaColor.getColor(caixaColor.color);
    out << '\n';

    return out;
}
