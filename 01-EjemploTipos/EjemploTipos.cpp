//============================================================================
// Name        : EjemploTipos.cpp
// Author      : Daniella Ramírez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <cassert>
#include <limits>

int main () {

      assert (2==1+1);
      assert(10 == 2*5);
      assert (true);
      assert (false==false);
      assert (false!=true);
      assert (not false);
      assert (false == not true);
      assert (true and true);
      assert (false or true);
      assert ((false and false) == false);
      assert (2.0==1.0+1.0);
      assert (1.0==0.1*10.0);
      assert (1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
      assert (20 != 10);
      assert (4 < 8);
      assert ('a'== 'a');
      assert ('a' == 97);
      assert (68 == 'D');
      assert (12 == std::string ("Las Palabras").length());
      assert(std::numeric_limits<int>::max() == 2147483647); // Limite maximo de int
      assert(std::numeric_limits<int>::min() == -2147483648); // Limite minimo de int
      assert(std::numeric_limits<short>::max() == 32767); // Limite maximo de short
      assert(std::numeric_limits<short>::min() == -32768); // Limite minimo de short
      assert(std::numeric_limits<short int>::max() == 32767); // Limite maximo de short int
      assert(std::numeric_limits<short int>::min() == -32768); // Limite minimo de short int
      assert(std::numeric_limits<unsigned short int>::max() == 65535); // Limite maximo de unsigned short int
      assert(std::numeric_limits<unsigned short int>::min() == 0); // Limite minimo de unsigned short int
      assert(std::numeric_limits<unsigned>::max() == 4294967295); // Limite maximo de unsigned
      assert(std::numeric_limits<unsigned>::min() == 0); // Limite minimo de unsigned
      assert(std::numeric_limits<signed short int>::max() == 32767); // Limite maximo de signed short int
      assert(std::numeric_limits<signed short int>::min() == -32768); // Limite minimo de signed short int
      assert(std::numeric_limits<long>::max() == 2147483647); // Limite maximo de long
      assert(std::numeric_limits<long>::min() == -2147483648); // Limite minimo de long
      assert(std::numeric_limits<long long>::max() == 9223372036854775807); // Limite maximo de long long
      assert(std::numeric_limits<long long>::min() == -9223372036854775808u); // Limite minimo de long long
      assert(std::numeric_limits<unsigned long long>::max() == 18446744073709551615u); // Limite maximo de unsigned long long
      assert(std::numeric_limits<unsigned long long>::min() == 0); // Limite minimo de unsigned long long
      assert(std::numeric_limits<float>::max() > 9999999999999999999u); //Limite maximo de float
      assert(std::numeric_limits<float>::min() < -9999999999999999999u); // Limite minimo de float
      assert(std::numeric_limits<double>::max() > 9999999999999999999u); //Limite maximo de double
      assert(std::numeric_limits<double>::min() < -9999999999999999999u); // Limite minimo de double
      assert(std::numeric_limits<long double>::max() > 9999999999999999999u); //Limite maximo de long double
      assert(std::numeric_limits<long double>::min() < -9999999999999999999u); // Limite minimo de long double

}
