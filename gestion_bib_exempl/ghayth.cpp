#include "Ouvrage.cpp"
#include "Livre.cpp"
#include "Video.cpp"
#include "Abonne.cpp"
#include "Biblioteque.cpp" 
#include "iostream"
#include "string.h" 

int main ()

{


Ouvrage A("hello","11/11/2021",true);
Livre B("got","13/04/2021",false,"ghayth_amri"); 
Video V("HXH","2022",true,"tughashi", 30);
Abonne X(10,"ghayth",12647409,"Amri"); 


Biblioteque m ;
m.ajouter_O(A);
m.ajouter_L(B);
m.ajouter_V(V);
m.ajouter_A(X);
m.info();




}
