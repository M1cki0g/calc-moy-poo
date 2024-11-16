#include "header.h"
#include <iostream>

using namespace std;


float etudiant::calc_moy(){
return (nt1+nt2)/2;
}

etudiant::etudiant(float a , float b , string n){
nt1 = a;
nt1 = b;
nom = n;
}

void etudiant::afficher(float a){
cout<<"la moyenne ="<<a<<endl;
cout<<"le nom "<<nom<<endl;
}

int main(){
string nom;
cout<<"saisir nom"<<endl;
cin>>nom;
etudiant a(2,4,nom);
float r = a.calc_moy();
a.afficher(r);
return 0;
}
