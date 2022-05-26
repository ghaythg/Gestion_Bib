#ifndef BIBLIOTEQUE_H
#define BIBLIOTEQUE_H
#include "Ouvrage.h"
#include "Video.h"
#include "Livre.h"
#include "Abonne.h"
#include<string>
#include <iostream>
#include<vector>

#pragma once

class Biblioteque
{
public:
    bool ajouter_A(const Abonne &A);
    vector<Abonne>::iterator get_Abonne(long id);
    vector<Ouvrage*>::iterator get_O(string titre);
    bool ajouter_O(const Ouvrage &O);
    bool ajouter_L(const Livre &O);
    bool ajouter_V(const Video &O);
    void info();
    Biblioteque();
    ~Biblioteque();

private: 
 vector<Ouvrage*> tabouv ;
 vector<Abonne>tabA;


};

#endif