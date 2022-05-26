#include "Abonne.h"
#include <iostream>

Abonne::Abonne(long I,string N,long Num,string emp)
{
    id=I;
    nom=N;
    CIN=Num;
    emprunt=emp;
}
Abonne::~Abonne()
{

} 
void Abonne::afficher()const
{
    cout<<"l\'ID de l'abonne est : "<<id<<endl;
    cout<<"le nom de l\'abonne est : "<<nom<<endl;
    cout<<"le numero de carte d'identité de l\'abonne est : "<<CIN<<endl;
    cout<<"l\'emprunt de l\'abonne est : "<<emprunt<<endl;
}
