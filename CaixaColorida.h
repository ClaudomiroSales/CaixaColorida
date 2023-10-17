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
public:
    CaixaColorida( double, double, Color = RED );

private:

    Color color;

};

#endif