#ifndef CAIXA_H
#define CAIXA_H

class Caixa
{
public:
    Caixa( double = 1, double = 1, double = 1 );

    double calcVolume( ) const { return altura * largura * comprimento; }

private:
    double altura;
    double largura;
    double comprimento;
};

#endif