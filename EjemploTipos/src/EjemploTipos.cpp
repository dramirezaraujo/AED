//============================================================================
// Name        : EjemploTipos.cpp
// Author      : Daniella Ramírez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <cassert>

int main () {

	//int
      assert (2==1+1);
      assert(10 == 2*5);
    // bool
      assert (true);
      assert (false==false);
      assert (false!=true);
      assert (not false);
      assert (false == not true);
      assert (true and true);
      assert (false or true);
      assert ((false and false) == false);
      // double
      assert (2.0==1.0+1.0);
      assert (1.0==0.1*10.0);
      assert (1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
      // unsigned
      assert (20 != 10);
      assert (4 < 8);
     //char
      assert ('a'== 'a');
      assert ('a' == 97);
      assert (68 == 'D');
      //string No se bien como ejemplificar
}
