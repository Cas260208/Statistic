#include "..\include\Statistic"

int media(int n, int ar[]){
    int suma = 0;
    int i, media; 
    
    for (i = 0; i < n; i++){
        suma = suma + ar[i];
    }

    media = suma/n;

    return media;
}