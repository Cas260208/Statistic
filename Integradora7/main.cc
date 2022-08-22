#include ".\include\Statistic"
#include <iostream>
#include <ostream>
#include <cstdlib>
#include <cstddef>
using namespace std;

int main(){
   int n;
   cout << "Ingresa el tamanio del arreglo: ";
   cin >> n;
   int ar[n];
   arreglo(n, ar);

   double medi = media(n, ar);
   cout << "Media: " << medi << "\n";
   
   double median = mediana(n, ar);
   cout << "Mediana: " << median << "\n";

   int mod = moda(n, ar) ;
   cout << "Moda: " << mod << "\n";
}