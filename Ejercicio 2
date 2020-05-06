#include <iostream>
using namespace std;

//Funcion para imprimir Arrays
void ImprimirArray(int *array,int *tam){
 int *p; cout<<"[";
for(p=array;p<(tam-1);p++){
    cout<<*p<<",";}
    cout<<*(p)<<"]"<<endl;
}



//Funcion para generar numeros aletorios
void GeneradorRandom(int *array, int size){
    int max=100;
    srand(time(0));
       for (int  i = 0; i < size; ++i ){
              *(array+i) = rand() % max;
          }
}

//Swap

void swap(int *a, int *b){
    int r= *a;
    *a = *b;
    *b = r;
}



void CocktailSort(int *array, int *tam){
    bool cambio = true;
    
    while(cambio){
        cambio=false;
        
        for(int *i=array; i<tam-1;i++){
            if(*i>*(i+1)){
                swap(*i,*(i+1));
                    cambio=true;
            }
       }
        if(!cambio){
            break;}
        
        cambio=false;
        
        
        for(int *i=tam-1;i>=array-1;i--){
            if(*i>*(i+1)){
                        swap(*i,*(i+1));
                            cambio=true;
                    }
        }
   }
}




int main() {
    int array[15]={};
    GeneradorRandom(array,15);
    int tam = sizeof(array)/sizeof(*array);
    int *inicio=array;
    int *fin= inicio+tam;
   
    cout<<"Array Desordenado"<<endl;
    ImprimirArray(array, fin);
    CocktailSort(inicio, fin);
    cout<<"Array Ordenado"<<endl;
    ImprimirArray(array, fin);
}
