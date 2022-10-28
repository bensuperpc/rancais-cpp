#pragma once

/*
  Use preprocessor to replace/define new keywords instead of using/typedef to avoid including all c++ libraries :D
*/

#define entier int
#define flottant float
#define caractere char

#define pour for
#define tant_que while
#define faire do
#define pour_chaque for each
#define dans in
#define avec using

#define principal main
#define retourne return
#define cas switch
#define cas_de case
#define defaut default

#define si if
#define sinon else
#define sinon_si else if

#define vrai true
#define faux false

#define classe class
#define publique public
#define prive private
#define protege protected
#define ami friend
#define virtuel virtual
#define automatique auto

#define vecteur vector
#define liste list
#define file queue
#define pile stack
#define chaine_de_caracteres string
#define carte map
#define ensemble set

#define sortie cout
#define entree cin
#define erreur cerr
#define flux flux
#define fin_de_ligne endl


#define statique static
#define constante const
#define volatilee volatile

#define structure struct
#define unionn union

#define nouveau new
#define detruire delete

#define essayer try
#define attraper catch
#define lancer throw

#define taille_de size_of

#define operateur operator

#define non !
//#define plus +
#define moins -
#define fois *
#define divise /
#define modulo %

#define egal ==
#define et &&
#define ou ||
#define et_egal &=
#define ou_egal |=
#define non_egal !=
#define plus_egal +=
#define moins_egal -=
#define fois_egal *=
#define divise_egal /=
#define modulo_egal %=
#define bit_egal ^=


#include <string>

/**
 * @brief Return the name of this header-only library
 */
inline auto name() -> std::string
{
  return "rancais_cpp";
}
