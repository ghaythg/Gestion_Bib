#ifndef LIVRE_H
#define LIVRE_H  
#include "Ouvrage.h"
#include "iostream" 

using namespace std ;

#pragma once

class Livre : public Ouvrage
{
public:
    Livre(); 
    Livre(string , string ,bool ,string) ;
    void  afficher() const ;
    string get_auteur();
    ~Livre();

private:
string auteur ;

};

#endif