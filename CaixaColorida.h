#ifndef CAIXACOLORIDA_H
#define CAIXACOLORIDA_H

#include "Caixa.h"

enum Color
   {
      RED = 1,
      BLUE,
      WHITE
   };

class CaixaColorida : public Caixa 
{
    friend ostream &operator<<( ostream &, const CaixaColorida & );
public:
    CaixaColorida( double, double, Color = RED );

private:

    Color color;

};

#endif