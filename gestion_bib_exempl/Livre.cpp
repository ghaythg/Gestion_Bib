#include "Livre.h"
#include <iostream>
using namespace std ;
Livre::Livre() : Ouvrage()
{
    auteur ="";
}

Livre::Livre(string titre , string date ,bool exist ,string auteur )
{
    this ->titre=titre;
    this ->date=date;
    this ->exist=exist;
    this -> auteur = auteur ;

} 
 void Livre :: afficher() const 
 { 
     Ouvrage::afficher();
     cout<<"l'auteur de ce livre est :" << auteur <<endl;

 } 

 string Livre :: get_auteur()
 {
        cout<<"c'est :" <<auteur<<endl;
        return auteur ;
        

 }
Livre::~Livre()
{

}