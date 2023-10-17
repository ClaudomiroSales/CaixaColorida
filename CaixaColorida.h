#ifndef CAIXACOLORIDA_H
#define CAIXACOLORIDA_H

#include "Caixa.h"

#include <string>
using std::string;

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
    CaixaColorida( double = 1, double = 1, double = 1, Color = RED );

private:

    Color color;

    string getColor( Color ) const;

};

#endif