#include <iostream>

using namespace std;

void swap(int *a, int *b){
   int copia=*a;
   *a=*b;
   *b=copia;
}


void Imprimir(int A [8]){
    for(int i=0;i<8;i++){
     cout<<A[i]<<endl;}
}

void ordenar(int a[8],int size){
int *impar=a;
int *par=(a+4);
int *tam=&size;
int temp;
int*pt=par;

for(int *i=impar;i<tam;i++){
  if(*impar>*par){
    temp=*par;
      for(int *h=par;h>i;h--){
        *par=*(par-1);
        //Imprimir(a);
        par--;
      }
     *impar=temp;
     par=++pt;
  }
i++;

}

}
