#include "..\include\Statistic"
#include <random>

void rellena_arreglo_normal(int mu, int st_dev, int n, int ar[]){
    std::random_device rd; //crear un numero aleatorio 
    std::mt19937 gen(rd()); //configurar el generador de numeros aleatorios
    std::normal_distribution<> distrib(mu, st_dev); //genera numeros aleatorios en el rango asignado 
    for (int i = 0; i < n; i++){
      ar[i] = distrib(gen);
    }
}
