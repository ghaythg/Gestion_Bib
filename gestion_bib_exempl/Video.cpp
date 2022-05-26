#include "Video.h"
#include <iostream>

using namespace std ; 

Video :: Video() :Ouvrage ()
{
    editeur ="";
    duree = 0 ;
}
Video::Video(string titre ,string date, bool exist,string editeur ,int duree )
{
    this->titre=titre;
    this->date =date;
    this ->exist=exist;
    this->editeur=editeur;
    this->duree=duree;
} 

string Video :: get_editeur()
{
    
    return editeur ;

} 
int Video :: get_duree()
{
    
    return duree;

}  

void Video::afficher() const
{
    Ouvrage::afficher();
    cout<<"l'editeur est : "<<editeur<<endl;
    cout<<"la duree du video est : "<<duree<<"min"<<endl;

}

Video::~Video()
{

}