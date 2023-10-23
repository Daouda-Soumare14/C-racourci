#include <iostream>
#include <cmath>  //Ne pas oublier cette ligne 
using namespace std;

int main()
{
    double const nombre(16); //Le nombre dont on veut la racine
                             //Comme sa valeur ne changera pas on met 'const'
    double resultat;         //Une case mémoire pour stocker le résultat

    resultat = sqrt(nombre);  //On effectue le calcul !

    cout << "La racine de " << nombre << " est " << resultat << endl;


    cout << "----------------------------------------------------"<<endl;
    double const nombre1(16); //Le nombre dont on veut la racine
                             //Comme sa valeur ne changera pas on met 'const'
    double resultat1;         //Une case mémoire pour stocker le résultat

    resultat1 = sin(nombre1);  //On effectue le calcul !

    cout << "Le sinus de " << nombre1 << " est " << resultat1 << endl;


    cout << "----------------------------------------------------"<<endl;
    double const nombre2(16); //Le nombre dont on veut la racine
                             //Comme sa valeur ne changera pas on met 'const'
    double resultat2;         //Une case mémoire pour stocker le résultat

    resultat2 = cos(nombre2);  //On effectue le calcul !

    cout << "Le cosinus de " << nombre2 << " est " << resultat2 << endl;


    cout << "----------------------------------------------------"<<endl;
    double const nombre3(16); //Le nombre dont on veut la racine
                             //Comme sa valeur ne changera pas on met 'const'
    double resultat3;         //Une case mémoire pour stocker le résultat

    resultat3 = tan(nombre3);  //On effectue le calcul !

    cout << "La tangente de " << nombre3 << " est " << resultat3 << endl;


    cout << "----------------------------------------------------"<<endl;
    double const nombre4(16); //Le nombre dont on veut la racine
                             //Comme sa valeur ne changera pas on met 'const'
    double resultat4;         //Une case mémoire pour stocker le résultat

    resultat4 = exp(nombre4);  //On effectue le calcul !

    cout << "L'exponetielle de " << nombre4 << " est " << resultat4 << endl;


    cout << "----------------------------------------------------"<<endl;
    double const nombre5(16); //Le nombre dont on veut la racine
                             //Comme sa valeur ne changera pas on met 'const'
    double resultat5;         //Une case mémoire pour stocker le résultat

    resultat5 = log(nombre5);  //On effectue le calcul !

    cout << "L'ogarithme de " << nombre5 << " est " << resultat5 << endl;

    return 0;
}
