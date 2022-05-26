#include "Biblioteque.h" 
#include <typeinfo>
#include <iostream>
using namespace std; 

vector<Abonne>::iterator Biblioteque :: get_Abonne(long id)
{
    for(vector<Abonne>::iterator i=tabA.begin();i<tabA.end();i++)  
    {
        if(i->get_id()==id)
        {
            return i;
        }
        
        
    }  
    return tabA.end();
}

bool Biblioteque::ajouter_A(const Abonne &A)
{
  if(get_Abonne(A.get_id())!= tabA.end())
      return false;

      else 
      tabA.push_back(A); 
      return true ;
}  

vector<Ouvrage*>::iterator Biblioteque:: get_O(string titre)
{
    for(vector<Ouvrage*>::iterator i=tabouv.begin();i<tabouv.end();i++)
    {
        if((*i)->get_titre()==titre) 
        {
            return i;
        }
          
    }  
    return tabouv.end(); 

}

bool  Biblioteque :: ajouter_O(const Ouvrage &O)
{
    if(get_O(O.get_titre())==tabouv.end())
    {
        Ouvrage *p =new Ouvrage(O);
        tabouv.push_back(p);
        return true ;

    }
    else
    return false;
} 

bool Biblioteque:: ajouter_L(const Livre &O) 
{
    if(get_O(O.get_titre())==tabouv.end())
    {
        Ouvrage *p = new Livre(O);
         tabouv.push_back(p);
         return true ;
    }
        else
        return false;
} 
bool Biblioteque:: ajouter_V(const Video &O) 
{
    if(get_O(O.get_titre())==tabouv.end())
    {
        Ouvrage *p = new Video(O);
         tabouv.push_back(p);
         return true ;
    }
        else
        return false;
} 
void Biblioteque:: info()
{
    for (vector<Abonne>:: iterator i=tabA.begin();i<tabA.end();i++) 
    {
        i->afficher();
    }

    for (vector<Ouvrage*>:: iterator j=tabouv.begin();j<tabouv.end();j++) 
    {
        if((*j)->get_exist())
        {
            (*j)->afficher();
        }
    }
    
}

Biblioteque::Biblioteque()
{

}

Biblioteque::~Biblioteque()
{
    for(vector<Ouvrage*>::iterator i=tabouv.begin();i<tabouv.end();i++) 
    delete (*i);
}