
#include <iostream>
using std::cout;

#include "Caixa.h"
#include "Caixa.cpp"
#include "CaixaColorida.h"
#include "CaixaColorida.cpp"


int main(int argc, char **argv)
{   
    const int NUMMAXCAIXAS = 2;
    Caixa         *caixas[NUMMAXCAIXAS];
    CaixaColorida *caixasColoridas[NUMMAXCAIXAS];

    caixas[ 0 ] = new Caixa;
    cout << *caixas[ 0 ];

    caixas[ 1 ] = new Caixa(2, 2);
    cout << *caixas[ 1 ];

    caixasColoridas[ 0 ] = new CaixaColorida;
    cout << *caixasColoridas[ 0 ];

    caixasColoridas[ 1 ] = new CaixaColorida(2, 2, 1, WHITE);
    cout << *caixasColoridas[ 1 ];



    for(int i = 0; i < NUMMAXCAIXAS; i++)
    {
        delete caixas[ i ];
        delete caixasColoridas[ i ];
    }


    return 0;
}