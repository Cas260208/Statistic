#include "..\include\Statistic"

int moda(int n, int ar[]){
    int cont1 = 0; //contador para el apoyo de la compararcion de numeros 
    int cont2 = 0; //diferencia del contador uno, para así lograr guardar la moda 
    int i, j, moda; 

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (ar[i] == ar[j] && i != j) {
                cont1++;
            }
        }
        if (cont1 > cont2){
            cont2 = cont1; 
            moda = ar[i];
        }
        cont1 = 0;
    }
    return moda; 
}