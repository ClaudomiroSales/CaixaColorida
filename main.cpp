
#include <iostream>
using std::cout;

#include "Caixa.h"
#include "Caixa.cpp"

int main(int argc, char **argv)
{
    Caixa *caixas[10];

    caixas[ 0 ] = new Caixa;
    cout << *caixas[ 0 ];

    caixas[ 1 ] = new Caixa(2, 2);
    cout << *caixas[ 1 ];


    return 0;
}