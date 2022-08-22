# Estadistica
La biblioteca con nombre "Statistic" tiene la funcion de realizar tres tipos de formulas de estadistica como lo es: la media, mediana y moda; apoyandose con arreglos de valores tipo entero. 

Carpetas: 
![image](https://user-images.githubusercontent.com/109366932/185821009-fc0cfd85-b834-408d-8766-497fe2b89016.png)

Para la creacion de las bibliotecas utilizamos los siguientes comados: 

1. Crear directorios y archivos desde powerShell con el siguiente comando: 

      New-Item (nombre de carpeta) -Type(Tipo) -Name (nombre) 
      
2. Creacion de los archivos ".o" mediante los siguientes comandos: 

     - g++ .\src\arreglo_normal.cc -c -o .\obj\arreglo_normal.o -fPIC
     - g++ .\src\arreglo_aleatorio.cc -c -o .\obj\arreglo_aleatorio.o -fPIC
     - g++ .\src\media.cc -c -o .\obj\media.o -fPIC
     - g++ .\src\mediana.cc -c -o .\obj\mediana.o -fPIC
     - g++ .\src\moda.cc -c -o .\obj\moda.o -fPIC
     
3. Creacion de la biblioteca dinamica: 

    Para la creacion de la biblioteca dinamica utilizamos lo archivos ".o", asi mismo ejecutamos con el siguiente comando: 
       
       - g++ -shared .\obj\* -o .\lib\dll\Statistic.dll 
        
    Despúes copiamos el archivo "Statistic.dll" y lo icorporamos a la carpeta "System32", para al momento de crear un archivo         
      
      - ".txt" leyera la biblioteca.
    
4. Creacion de la biblioteca estatica: 
    
    Utilizamos el siguiente comando para la creacion de la biblioteca estatica: 
   
      - ar crs .\lib\static\Statistic.lib .\obj\*.o
    

