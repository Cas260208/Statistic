#include "..\include\Statistic"

int mediana(int n, int ar[]){
  int m = 0;
  int mediana;
  int v = n/2;

  for(int i = 0;i < n; i++){
    for(int j = i; j < n; j++){
      if(ar[i]  > ar[j]){
        m = ar[i];
        ar[i] = ar[j];
        ar[j] = m;
      }
    }
  }
  
  for(int i = 0; i < n; i++){
    ar[i];
  }

  if(n % 2 == 0){
    mediana = (ar[v] + ar[v-1]) / 2;
  } else {
    mediana = ar[v];  
  }

  return mediana; 
}