//Tensor grado 3 de aleatorios, crear arreglos de 3 dimensiones con datos de manera aleatoria
//Fuentes
//https://www.azulschool.net/todos-los-grupos/grupo-de-c/forum/topic/generar-numeros-aleatorios-en-c/
//Creado por : Israel Verdin Rangel, Gloria Astrid Mercado Perez
//Fecha : 01/09/2023
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
    int a = 1 + rand() % 10;//creando 3 variables aleatorias
    int b = 1 + rand() % 10;
    int c = 1 + rand() % 20;
    int arreglo[b][a][c];//iniciando un arreglo de 3 dimensiones

    size_t renglones = sizeof(arreglo) / sizeof(arreglo[0]); //encontrar el numero de renglones dividiendo los renglones entre el espacio que ocupa cada dato
    size_t columnas = sizeof(arreglo[0]) / sizeof(arreglo[0][0]);//encontrar el numero de columnas dividiendo las columnas entre el espacio que ocupa cada renglon
    size_t capas = sizeof(arreglo[0][0]) / sizeof(arreglo[0][0][0]);//encontrar el numero de capas dividiendo las capas entre el espacio de cada columna

    cout << "columnas: " << columnas  << endl;
    cout << "renglones: " << renglones  << endl;
    cout << "capas: " << capas  << endl;

    for(int i=0; i<capas; i++){
        cout << "\n";
        for(int j=0; j<renglones; j++){
            cout << "\n";
            for(int k=0; k<columnas; k++){
                arreglo[i][j][k] = rand() % 100;
                cout <<  arreglo[i][j][k] << "\t";//ciclos para mostrar cada uno de los datos del tensor
            }
        }
        
    }
    return 0;
}
