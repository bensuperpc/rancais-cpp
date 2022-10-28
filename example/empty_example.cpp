#include<vector>
#include<iostream>

#include "rancais_cpp/rancais_cpp.hpp"

automatique principal() -> int
{
  std::vecteur<std::chaine_de_caracteres> vect(2, "Bonjour, le monde!");

  pour(automatique i = 0; i < 10; ++i)
  {
    std::sortie << vect[i] << std::fin_de_ligne;
  }

  retourne 0;
}
