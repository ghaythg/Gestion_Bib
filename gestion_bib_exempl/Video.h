#ifndef VIDEO_H
#define VIDEO_H 
#include "Ouvrage.h"


#pragma once

class Video : public Ouvrage 
{
public:
    Video();
    Video(string,string,bool,string,int); 
    string get_editeur();
    int get_duree(); 
    void afficher() const;
    

    ~Video();

private: 
    string editeur;
    int duree ;


};

#endif